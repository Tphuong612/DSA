#include <bits/stdc++.h>
using namespace std;
int x[50];
int n, k, s, dem=0;
void ql(int i, int sum)
{
	for(int j=x[i-1]+1; j<=n; j++){
		if(sum+j<=s){
			x[i]=j;
			if(i==k){
				if(sum+j==s) dem++;
			}
			else ql(i+1, sum+j);
		}
	}
}
int main()
{
	cin>>n>>k>>s;
	x[0]=0;
	ql(1, 0);
	cout<<dem;
}
