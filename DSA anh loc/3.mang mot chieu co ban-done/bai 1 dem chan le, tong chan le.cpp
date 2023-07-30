#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+5];
	long long s1=0, s2=0, dem1=0, dem2=0;
	for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]%2==0){
				s1+=a[i];
				dem1++;
			}
			else{
				s2+=a[i];
				dem2++;
			}
		}
	cout<<dem1<<endl<<dem2<<endl<<s1<<endl<<s2;
}
