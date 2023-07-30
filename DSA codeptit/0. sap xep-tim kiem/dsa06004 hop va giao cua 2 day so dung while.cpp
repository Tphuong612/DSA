#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n1, n2;
		cin>>n1>>n2;
		long long a[n1], b[n2];
		for(int i=0;i<n1;i++) cin>>a[i];
		for(int i=0;i<n2;i++) cin>>b[i];
		
		vector <long long> hop, giao;
		int i=0,j=0;
		while(i<n1&&j<n2){
			if(a[i]<b[j]){
				hop.push_back(a[i]);
				i++;
			}
			else if(b[j]<a[i]){
				hop.push_back(b[j]);
				j++;
			}
			else{
				hop.push_back(a[i]);
				giao.push_back(a[i]);
				i++;j++;			}
		}
		while(i<n1){
			hop.push_back(a[i]);
			i++;
		}
		while(j<n2){
			hop.push_back(b[j]);
			j++;
		}
		for(int i:hop) cout<<i<<' ';
		cout<<endl;
		for(int i:giao) cout<<i<<' ';
		cout<<endl;
	}
}
