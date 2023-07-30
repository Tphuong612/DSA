#include <bits/stdc++.h>
using namespace std;
string s;
int k;
char x[100];
void result(){
	for(int i=0;i<k;i++) cout<<x[i];
	cout<<endl;
}
void Try(int i){
	for(int j=0;j<s.size();j++){
		x[i]=s[j];
		if(i==k-1) result();
		else Try(i+1);
	}
}
int main()
{
	s="abcd";
	k=2;
	Try(0);
}
