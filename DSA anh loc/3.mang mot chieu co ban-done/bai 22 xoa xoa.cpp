#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	cin>>n>>x;
	long long a[n+5];
	for(int i=0;i<n;i++) cin>>a[i];
	int check=0;
	int danhdau=-1;
	for(int i=0;i<n;i++){
		if(a[i]==x){
			check=1;
			danhdau=i;
			break;
		}
	}
	if(check==0) cout<<"NOT FOUND";
	else{
		for(int i=0;i<n;i++) 
			if(i!=danhdau) cout<<a[i]<<" ";
	}
}
