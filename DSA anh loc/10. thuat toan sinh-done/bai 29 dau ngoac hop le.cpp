#include <bits/stdc++.h>
#include <stack>
using namespace std;

char a[3000];
int n;

int check()
{
	stack <char> s;
	for(int i=0;i<n;i++){
		if(a[i]=='(') s.push(a[i]);
		else {
			if(s.empty()) return 0;
			else s.pop();
		}
	}
	if(s.empty()) return 1;
	else return 0;
}
void in()
{
	for(int i=0; i<n; i++) cout<<a[i];
	cout<<endl;
}
void Try(int i)
{
	for(int j=0;j<=1;j++){
		if(j==0) a[i]='(';
		else a[i]=')';
		if(i==n-1){
			if(check()) in();
		}
		else Try(i+1);
	}
}
int main()
{
	cin>>n;
	if(n%2==1) cout<<"NOT FOUND";
	else Try(0);
}
