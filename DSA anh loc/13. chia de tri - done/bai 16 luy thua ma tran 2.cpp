#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll mod=1000000007;
ll n, k;
struct matrix{
	ll a[13][13];
	matrix operator * (matrix other){
		matrix res;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				res.a[i][j]=0;
				for(int k=0;k<n;k++){
					res.a[i][j]+=a[i][k]*other.a[k][j];
					res.a[i][j]%=mod;
				}
			}
		}
		return res;
	}
	
};
matrix bipow(matrix A, ll k){
	if(k==1) return A;// stop condition
	matrix x=bipow(A, k/2);
	if(k%2==0) return x*x;
	else return x*x*A; 
}
int main()
{
	matrix A;// khoi tao ma tran 
	cin>>n>>k;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>A.a[i][j];
		}
	}
	matrix kq=bipow(A, k);
	ll sum=0;
	for(int i=0;i<n;i++){
		sum+=kq.a[i][n-1]%mod;
	}
	cout<<sum%mod;
}
