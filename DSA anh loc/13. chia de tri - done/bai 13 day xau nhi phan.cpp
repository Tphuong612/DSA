#include <bits/stdc++.h>
using namespace std;
long long fb[100];
void init(){
	fb[0]=0;
	fb[1]=fb[2]=1;
	for(int i=3;i<=92;i++)
		fb[i]=fb[i-2]+fb[i-1];
}
char solve(long long n, long long k){
	if(n==1) return '0';
	if(n==2) return '1';
	if(k<=fb[n-2]) return solve(n-2, k);
	else return solve(n-1, k-fb[n-2]);
}
int main()
{
	long long n, k;
	cin>>n>>k;
	init();
	cout<<solve(n, k);
}
