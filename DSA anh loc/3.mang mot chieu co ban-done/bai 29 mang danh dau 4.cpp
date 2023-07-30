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
	long long gtr=0;
	int max=0;
	for(auto i:m){
		
		if(i.second>max){
			max=i.second;
			gtr=i.first;
		}	
	}
	cout<<gtr<<" "<<max;
}
