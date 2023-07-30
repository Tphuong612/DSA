#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n,x;cin>>n>>x;
	long long z;
	vector<long long>vt;
	for(int i=0;i<n;i++){
		cin>>z;
		vt.push_back(z);
	}
	vector<int> f(100001,0);
	sort(vt.begin(),vt.end());
	int l=0;int r=vt.size()-1;
	int cnt=0;
	while(l<r){
		if(vt[l]+vt[r] > x) r--;
		else if(vt[l]+vt[r]<x) l++;
		else {	
			
		}
	}
	int l1=0;
	int r1=vt.size()-1;
	while(r1>l1){
		if(vt[l1]+vt[r1]>x) r1--;
		else {
			if(f[r1] ==0 && f[l1] == 0){
				cnt++;
				f[r1]=1;f[l1]=1;
			}
			l1=0;
			r1=vt.size()-1;
		}
	}
	cout<<cnt+vt.size();
}
