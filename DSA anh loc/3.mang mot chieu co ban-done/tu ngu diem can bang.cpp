#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

bool chk(int n){
	if(n<2)
		return false;
	for(int i=2; i<=sqrt(i); i++){
		if(n%i==0)
			return false;
	}
	return true;
}
int main(){
	int n;
	cin >>n;
	int a[n], f[n];
	for(int &x:a)
		cin >>x;
	for(int i=0; i<n; i++){
		if(i==0)
			f[i]=a[i];
		else{
			f[i]=f[i-1]+a[i];
		}
	}
	for(int x:f)
		cout <<x <<" ";
	for(int i=1; i<=n-1; i++){
		int suml=f[i-1],
		sumr=f[n-1]-f[i];
		if(chk(suml) && chk(sumr))
			cout <<i <<" ";
	}
}