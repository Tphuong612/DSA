#include <bits/stdc++.h>
using namespace std;
int main()
{
	string n;
	cin>>n;
	int tong=0;
	for(int i=0;i<n.length();i++) tong+=n[i]-'0';
	cout<<tong;
}
