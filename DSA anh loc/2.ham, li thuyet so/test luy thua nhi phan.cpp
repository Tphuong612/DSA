#include <bits/stdc++.h>
using namespace std;
long long pow3(int a, int b){
	long long res=1;
	while(b){
		if(b%2==1) res*=a;
		b/=2;
		a*=a;
	}
	return res;
}
int main()
{
 	int a,b;
 	cin>>a>>b;
 	cout<<pow3(a,b);
}
