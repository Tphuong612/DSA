#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
string s[22];
int n;
string res;
int used[22]={0};
set <string> ans;			// Luu ket qua

bool cmp(string a, string b){
	if(b.length()>a.length())
		return true;
	return b>a;
}

void Try( int ind){
//	res+=" "+s[ind];
//	cout <<res;
	for(int j=ind+1; j<=n; j++){
//		if(used[i]==0 && cmp(s[ind],s[i]) ){
			res+=" "+s[j];				
			used[j]=1;
			cout <<res<<'\n';
			ans.insert(res);
				
//			if(ind<n)
//				Try(ind+1);		
//			// Back_track
//			used[i]=0;
//			int l=s[i].length()+1;
//			res.erase(res.begin()+l, res.end());
//		}

	}
}

int main(){
//	string s1="7", s2="22";
//	if(cmp(s1,s2))
//		cout <<1;
	int n;
	cin >>n;
	for(int i=1; i<=n; i++){
		cin >>s[i];
	}
	
	for(int i=1; i<=n; i++){
		res=s[i];
		Try(i);
//		res.clear();
	}
	if(ans.empty()) cout<<"tu ngu";
	for(auto x:ans)
		cout << x <<'\n';
}