#include <bits/stdc++.h>
using namespace std;
int a[10000005];
void sang(int n)
{
	for(int i=0;i<=n;i++) a[i]=1;
	a[0]=a[1]=0;
	for(int i=2;i<=sqrt(n);i++)
		{
			if(a[i]){
				for(int j=i*i;j<=n;j+=i) a[j]=0;
			}
		}
//	for(int i=0;i<=n;i++)
//		if(a[i]) cout<<i<<" ";
}
int check(int n)
{
	string s=to_string(n);
	int max=s[s.size()-1];
	for(int i=0;i<s.size()-1;i++){
		if(s[i]>max) return 0;
	}
	return 1;
}
int main()
{
	int n;
	cin>>n;
	int dem=0;
	sang(n);
	for(int i=0;i<=n;i++) 
		if(check(i)&&a[i]){
			dem++;
			cout<<i<<" ";
		}
	cout<<endl<<dem;
}
