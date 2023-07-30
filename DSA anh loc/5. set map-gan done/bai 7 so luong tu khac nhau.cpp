#include <bits/stdc++.h>
using namespace std;
int main()
{
	string xau;
	getline(cin,xau);
	set <string> st;
	stringstream s(xau);
	string cmp;
	while(s>>cmp)
		{
			st.insert(cmp);
		}
	cout<<st.size()<<endl;
	cout<<*st.begin()<<" "<<*st.rbegin();		
}
