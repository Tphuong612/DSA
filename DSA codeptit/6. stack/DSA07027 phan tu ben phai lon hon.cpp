#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+5];
		for(int i=0;i<n;i++) cin>>a[i];
		
		stack <int> st;
		vector <int> r(n);
		for(int i=n-1;i>=0;i--){
			while(!st.empty()&&a[i]>=st.top()) st.pop(); 
			if(st.size()>0) r[i]=st.top();
			if(st.size()==0) r[i]=-1;
			st.push(a[i]);
		}
		for(auto i: r) cout<<i<<" ";
		cout<<endl;
	}
}
