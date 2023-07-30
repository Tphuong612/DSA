#include <bits/stdc++.h>
using namespace std;
int a[15], n;
int check()
{
	for(int i=1;i<=n-1;i++)
		if(abs(a[i]-a[i+1])==1) return 0;
	return 1;
}
void sinh()
{
	do{
		if(check()){
			for(int i=1;i<=n;i++) cout<<a[i];
			cout<<endl;
		}
	}
	while(next_permutation(a+1, a+n+1));
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++) a[i]=i;
	sinh();
	
}
