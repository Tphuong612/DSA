#include <bits/stdc++.h>
using namespace std;
bool nt(int n)
	{
		if(n<2) return false;
		for(int i=2;i<=sqrt(n);i++)
			if(n%i==0) return false;
		return true;
	}
bool check(int x){
    int sum=0;
    while(x)
        {
            int n=x%10;
            if(n!= 3 && n!=5 && n!=7 && n!= 2)
                return false;
            sum+=n;
            x/=10;
        }
    if(nt(sum))
        return true;
    return false;
}
int main()
{
	int a,b;
	cin>>a>>b;
	int dem=0;
	for(int i=a;i<=b;i++) 
		if(check(i)&&nt(i)) dem++;

	cout<<dem;
}
	