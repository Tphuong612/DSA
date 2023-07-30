#include <bits/stdc++.h>
using namespace std;
long long fb[93];
void init(){
	fb[0]=0;
	fb[1]=fb[2]=1;
	for(int i=3;i<=93;i++) 
		fb[i]=fb[i-1]+fb[i-2];
}
char solve(long long k, long long n){
	if(n==1) return 'A';//stop condition
	if(n==2) return 'B';// stop condition
	if(k<=fb[n-2]) return solve(k,n-2);
	else return solve(k-fb[n-2], n-1);
}
int main()
{
	long long n, k;
	cin>>n>>k;
	init();
	cout<<solve(k, n);
}
