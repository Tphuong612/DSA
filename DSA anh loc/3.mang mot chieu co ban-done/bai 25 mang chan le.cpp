#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector <int> a;
	long long dem1=0, dem2=0;
	int x;
	while(cin>>x)
		{
			if(x%2==0)// tinh chan
				{
					dem1++;
	//				s1+=a[i];
				}
			else// tinh le
				{
					dem2++;
	//				s2+=a[i];
				}
		}
	if(dem1<dem2) cout<<"LE";
	else if(dem1==dem2) cout<<"CHANLE";
	else cout<<"CHAN";
	
}
