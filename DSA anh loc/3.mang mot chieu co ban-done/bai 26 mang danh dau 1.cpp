#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long a[n+5];
	map <int, int> m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		m[a[i]]++;
	}
	for(auto i:m){
		cout<<i.first<<" "<<i.second<<endl;
	}
	
}
