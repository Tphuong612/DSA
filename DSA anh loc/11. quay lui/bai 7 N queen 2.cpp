#include <bits/stdc++.h>
using namespace std;
int n=8;
set <long long> s;
int a[20][20], b[20];
long long tong=0;
bool cot[100], xuoi[100], nguoc[100];
//int a[100];
// do da xay dung moi con hau nam tren 1 hang nen ta ko can check theo hang nua
void Try(int i)// khi con hau hang thu i, xet xem lieu co phuong an hay ko
{
	
	for(int j=1;j<=n;j++){
		if(cot[j]&&xuoi[i-j+n]&&nguoc[i+j-1]){
//			b[i]=j;// quan hau hang thu i dat o cot j
			tong+=a[i][j];
			xuoi[i-j+n]=nguoc[i+j-1]=cot[j]=false;
			if(i==n){
				s.insert(tong);
			}
			else Try(i+1);
			cot[j]=xuoi[i-j+n]=nguoc[i+j-1]=true;
			tong-=a[i][j];
		}
	}
}
int main()
{
	for(int i=1;i<=8;i++)
		for(int j=1;j<=8;j++) 
			cin>>a[i][j];
	for(int i=1;i<=n;i++) cot[i]=true;// khoi tao cac mang danh dau
	for(int i=1;i<=2*n-1;i++){
		xuoi[i]=true;
		nguoc[i]=true;
	}
	Try(1);
	cout<<*s.rbegin();
}
