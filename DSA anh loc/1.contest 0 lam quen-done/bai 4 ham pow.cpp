#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x,y;
	cin>>x>>y;
	long long luythua=(long long)pow(x,y);
	
	if(luythua==pow(x,y)) cout<<luythua;
	else cout<<fixed<<setprecision(2)<<pow(x,y);
}
