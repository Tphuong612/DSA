#include <bits/stdc++.h>
using namespace std;
string a[100]={"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
string s, kq="";
int k;
void Try(int i)
{
	int idx = s[i]-'0';
	for(int j=0;j<a[idx].size();j++){
		kq+=a[idx][j];
		if(kq.size()==k) cout<<kq<<" ";
		else Try(i+1);
		kq.pop_back();// buoc backtrack
	}
	
}
int main()
{
	cin>>s;
	sort(s.begin(), s.end());
	k=s.size();
	Try(0);// nau bat dau tu so khac thi kq.size()!=k => khong in ra 
}
