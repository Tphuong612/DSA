#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector <string> v;
		for(int i=0;i<n;i++){
			string s;
			cin>>s;
			sort(s.begin(), s.end());
			v.push_back(s);
		}
		int check=1;
		for(int i=0;i<n;i++){
			for(int j=0;j<n-1;j++){
				if(v[j][i]>v[j+1][i]){
					check=0;
				}
			}
		}
		if(check==0) cout<<"NO";
		else cout<<"YES";
		cout<<endl;
	}
}
