#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	map <long long, long long> m;
	for(long long i=2;i<=sqrt(n);i++){// phan tich thua so nguyen to
		if(n%i==0){
			while(n%i==0){
				m[i]++;
				n/=i;
			}
		}
	}
	if(n!=1) m[n]++;
	
	if(m.size()>=3) cout<<"YES";// chia truong hop
	else if(m.size()==2){
		int cnt=0;
		for(auto x: m){
			cnt+=x.second;
		}
		if(cnt>=4) cout<<"YES";
		else cout<<"N0";
	}
	else{
		int cnt=0;
		for(auto x: m){
			cnt+=x.second;
		}
		if(cnt>=6) cout<<"YES";
		else cout<<"N0";
	}
}

