#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector <long long> v(n);
	multiset <long long> st;
	for(int i=0;i<n;i++) {
		cin>>v[i];
		st.insert(v[i]);
	}
	int q;
	cin>>q;
	while(q--)
	{
		cint>>k>>x;
		if(k==1)
			{
				cin>>x;
				v.push_back(x);
				st.insert(x);
			}
		if(k==2)
			{
				if(!st.empty()) 
			}
	}
}
