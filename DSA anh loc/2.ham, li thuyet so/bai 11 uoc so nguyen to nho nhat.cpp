#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
bool prime(int n){
	if(n<2) return false;
	for(int i=2; i<=sqrt(n); i++)
		{
			if(n%i==0)
				return false;
		}
	return true;
}
int main(){
	
	int n;
	cin >>n;
	for(int i=1; i<=n; i++)
		{
			if(i==1)
				cout <<1 <<" ";
			else if(prime(i)) cout <<i <<" ";
			else
				{
					for(int j=2; j<=sqrt(i); j++)
						{
							if(i%j==0)
								{
									cout <<j <<" ";
									break;
								}
						}							
				}
			cout<<endl;
		}
	

}
