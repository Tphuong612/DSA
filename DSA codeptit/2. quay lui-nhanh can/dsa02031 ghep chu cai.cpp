#include <bits/stdc++.h>
using namespace std;
int n;
bool chuaxet[100];
char a[100];
int dem=0;
int check()
{
	if(a[1]=='A'||a[1]=='E'|| a[n]=='E'||a[n]=='A') return 1;
	return 0;
}
void result()
{
	dem++;
	for(int i=1;i<=n;i++) cout<<a[i];
	cout<<endl;
}
void Try(int i)
{
	for(int j=1;j<=n;j++)
		if(chuaxet[j]){
			a[i]=j+'A'-1;
			chuaxet[j]=false;
			if(i==n){
				if(check()) result();			
			}
				
			else Try(i+1);
			chuaxet[j]=true;
		}
}
int main()
{
	char c;
	cin>>c;
	n=c-'A'+1;
	for(int i=1;i<=n;i++) chuaxet[i]=true;
	Try(1);
	
}
