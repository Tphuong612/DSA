#include <bits/stdc++.h>
using namespace std;
bool check(long long a, long long b, long long c){
	if(a<b+c&&b<a+c&&c<a+b) return true;
	else return false;
}
int main()
{
	int n;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a, a+n);
	long long max_per=0, x=0, y=0, z=0;
	int ktr=0;
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			for(int k=j+1;k<n;k++){
				if(check(a[i], a[j], a[k])){
					ktr=1;
					long long tmp=a[i]+a[j]+a[k];// a[k]>=a[j]>=a[i];
					if(tmp>max_per){
						max_per=tmp;
						x=a[i]; y=a[j]; z=a[k];
					}
					else if(tmp==max_per){
						if(a[k]>z){
							x=a[i]; y=a[j]; z=a[k];
						}
						else if(a[i]>x){
							x=a[i]; y=a[j]; z=a[k];
						}
					}
				}
			}
	if(ktr==0) cout<<-1;
	else cout<<x<<" "<<y<<" "<<z;
}
