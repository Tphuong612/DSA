#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n=s.length();
	vector<int> l(n, 1);
	//L[i]: do dai day con ket thuc o chi so i
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(s[i]>=s[j]) l[i]=max(l[i], l[j]+1);
		}
	}
	cout<<*max_element(l.begin(), l.end());
}
