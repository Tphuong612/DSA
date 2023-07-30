#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int c[100][100];// mang chi phi
int n;// so luong thanh pho
int x[100];//x[i]=j: thanh pho tham o luot thu i la thanh pho j
int visited[100], res=INT_MAX, sum=0;
void nhap(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) cin>>c[i][j];
	}
	x[1]=1;
	visited[1]=1;
}

void Try(int i){
	for(int j=1; j<=n;j++){
		if(!visited[j]){
			x[i]=j; // thanh pho tham o luot thi i la thanh pho j
			
		}
	}
}
int main()
{
	
}
