#include <bits/stdc++.h>
using namespace std;
int n;
int a[30];
bool visited[30];
int check()
{
	for(int i=1;i<=n-1;i++){
		if(abs(a[i+1]-a[i])==1) return 0; 
	}
	return 1;
}
void in()
{
	if(check())
	{
		for(int i=1;i<=n;i++) cout<<a[i];
		cout<<endl;
	}
}
void Try(int i)
{
	for(int j=1;j<=n;j++){
		if(visited[j]){
			a[i]=j;
			visited[j]=false;
			if(i==n) in();
			else Try(i+1);
			visited[j]=true;
		}
	}
}
int main()
{
	cin>>n;
	memset(visited, true, 30);
	Try(1);
}
