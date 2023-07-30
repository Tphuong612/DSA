#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll m0d=1e9+7;
struct matrix{
	ll a[2][2];
	matrix operator *(matrix other){
		matrix res;
		for(int i=0; i<2; i++){
			for(int j=0; j<2; j++){
				res.a[i][j]=0;
				for(int k=0;k<2;k++){
					res.a[i][j]+=a[i][k]*other.a[k][j];
					res.a[i][j]%=mod;
				}
			}
		}
		return res;
	}
};
 
matrix bipow(matrix A, ll n){
	if(n==1) return A;
	matrix x=bipow(A, n/2);
	if(n%2==0) return x*x;
	else return x*x*A; 
}
int main()
{
	ll t;
	cin>>t;
	while(t--){

		matrix A;// khoi tao ma tran 
		A.a[0][0]=1;
		A.a[0][1]=1;
		A.a[1][0]=1;
		A.a[1][1]=0;
		ll n;
		cin>>n;
		matrix kq=bipow(A, n);
		cout<<kq.a[0][1]<<endl;
	}
}
