#include <bits/stdc++.h>
using namespace std;
int n;

bool cot[100], xuoi[100], nguoc[100];
int a[100];
// do da xay dung moi con hau nam tren 1 hang nen ta ko can check theo hang nua
void Try(int i)// khi con hau hang thu i, xet xem lieu co phuong an hay ko
{
	for(int j=1;j<=n;j++){
		if(cot[j]&&xuoi[i-j+n]&&nguoc[i+j-1]){
			a[i]=j;// quan hau hang thu i dat o cot j
			xuoi[i-j+n]=nguoc[i+j-1]=cot[j]=false;
			if(i==n){
				for(int r=1;r<=n;r++){
					for(int c=1; c<=n; c++)
						if(a[r]==c) cout<<"Q";
						else cout<<".";
					cout<<endl;
				}
				cout<<endl;
			}
			else Try(i+1);
			cot[j]=xuoi[i-j+n]=nguoc[i+j-1]=true;
		}
	}
}
int main()
{
	int t=1;
//	cin>>t;
	while(t--){
		
		cin>>n;
		for(int i=1;i<=n;i++) cot[i]=true;// khoi tao cac mang danh dau
		for(int i=1;i<=2*n-1;i++){
			xuoi[i]=true;
			nguoc[i]=true;
		}
		Try(1);
	}
}
