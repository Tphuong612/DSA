#include <bits/stdc++.h>// xau chung khong can lien tiep
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		string s1, s2;
		cin>>s1>>s2;
		int f[s1.length()+1][s2.length()+1];
		/*luu do dai xau con chung dai nhat co duoc 
		voi cach lay i ki tu dau tien cua xau x
		va j ki tu dau tien cua xau y
		*/
	
		for(int i=0;i<=s1.length();i++){
			for(int j=0;j<=s2.length();j++){
				if(i==0||j==0) f[i][j]=0;// buoc khoi tao
				else{
					if(s1[i-1]==s2[j-1]) f[i][j]=f[i-1][j-1]+1;
					else f[i][j]=max(f[i-1][j], f[i][j-1]);
				}
			}
		}
		cout<<f[s1.length()][s2.length()]<<endl;
	}	
}
