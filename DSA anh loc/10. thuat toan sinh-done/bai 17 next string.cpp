#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
//	int t;
//	cin>>t;
//	while(t--){
		cin>>s;
		if(next_permutation(s.begin(), s.end())){
			cout<<s<<endl;
		}
		else{
			cout<<"NOT EXIST";
		}
//	}
}
