#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;

int main(){
	int n,s;
	cin >>n >>s;
	int a[n+1],f[n+1];
	for(int i=1; i<=n; i++){
		cin >>a[i];
	}
//	f[0]=0;
	memset(f, 0, sizeof(f));
	for(int i=1; i<=s; i++){
		int res=mod; 			
		for(int j=1; j<=n; j++){
            if(a[j] <=i){
//                res=min(res, f[i-a[j]] +1);\
				cout <<i <<" " <<a[j] <<endl;
            }			
		}
		f[i]= res;
	}
//	for(int i=1; i<=n; i++)
//		cout <<a[i] <<" ";
//	cout <<f[s];
}