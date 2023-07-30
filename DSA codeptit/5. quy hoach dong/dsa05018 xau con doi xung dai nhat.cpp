#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n=s.length();
		bool f[n+1][n+1];
		s="x"+s;
		int ans=1;
		for(int i=1;i<=n;i++) f[i][i]=true;// xau con co do dai bang 1;
		for(int len=2;len<=n;len++){
			for(int i=1;i<=n-len+1;i++){// chi so bat dau
				int j=i+len-1;// chi so ket thuc
				if(len==2&&s[i]==s[j]) f[i][j]=true;
				else {
					f[i][j]=f[i+1][j-1]&&s[i]==s[j];
				}
				if(f[i][j]) ans=max(ans, len);
			}
		}
		cout<<ans<<endl;
		
	}
}
