#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t=1;
	//cin>>t;
	while(t--){
		int n, s, m;// n: mua nhieu nhat, s: so ngay, m: luong an moi ngay
		cin>>n>>s>>m;
		if (s * m > (s - s / 7) * n)// day= s-s/7;(s/7: so ngay chu nhat)
            cout << -1 << endl;
		else{
			cout<<ceil((float)s*m/n)<<endl;
		}
	}	
}
