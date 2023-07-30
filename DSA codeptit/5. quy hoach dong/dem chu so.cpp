#include <bits/stdc++.h>
using namespace std;
int countNum(int n, int digit){
	int p=1, ans=0;
	int l=n, r=0;
	while(l>0){
		int x=l%10;
		l/=10;
		ans+=l*p;
		if(x==digit) ans+=r+1;
		else if(x>digit) ans+=p;
		p*=10;
		r=n%p;
	}
	if(digit==0) ans-=(p-1)/9;
	return ans;
}

int main()
{
	int t;
	cin>>t;
	while(t--){
		long long a, b;
		cin>>a>>b;
		map<char, int> x;
		if(a>b) swap(a, b);
		int cnt[10];
		for(int i=0;i<=9;i++){
			cnt[i]=countNum(b, i);
			if(a-1>0) cnt[i]-=countNum(a-1, i);
		}
		for(int i=0;i<=9;i++) cout<<cnt[i]<<" ";
		cout<<endl;
	}
}
