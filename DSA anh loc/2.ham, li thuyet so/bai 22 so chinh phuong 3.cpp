#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long a,b;
	cin >>a >>b;
	long long dem=0;
    for(long long i=(long long)sqrt(a);i<=sqrt(b); i++)
        {
            if(i*i>=a) dem++;
    	}
    cout<<dem;
}
