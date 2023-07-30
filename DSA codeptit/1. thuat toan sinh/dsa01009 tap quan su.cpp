#include <bits/stdc++.h>// tap quan su = to hop tiep theo= tim so phan tu khac trong to hop tiep theo
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		int a[30],b[30];
		set <int> s;
		for(int j=1;j<=k;j++){
			cin>>a[j];
			b[j]=a[j];
			s.insert(a[j]);
		}
		int i=k;
		while(i>0&&b[i]==n-k+i) i--;//tim vi tri a[i]!=x-k+1;
		if(i>0){
			b[i]=b[i]+1;
			for(int m=i+1;m<=k;m++){
				b[m]=b[i]+m-i;
			}
		}
		for(int j=1;j<=k;j++) 
			s.insert(b[j]);
		int dem=s.size()-k;
		if(dem!=0) cout<<dem;
		else cout<<k;
		cout<<endl;
	}
}
