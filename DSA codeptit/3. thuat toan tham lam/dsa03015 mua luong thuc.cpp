#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n, s, m;// n la tong, s la ngay, m la trong 1 ngay
		cin>>n>>s>>m;
		if(n<m||6*(n-m)<m) cout<<"-1"<<endl;
		else{
			cout<<ceil((float)s*m/n)<<endl;
		}
	}
}
