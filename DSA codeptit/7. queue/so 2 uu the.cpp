#include <bits/stdc++.h>
using namespace std;
vector <string> res;
bool check(string s){
	int dem=0;
	for(int i=0; i<s.size(); i++){
		if(s[i]=='2') dem++;
		if(dem>s.length()/2) return true;
	}
	return false;
}
void init(){
	queue <string> q;
	q.push("1");
	q.push("2");
	res.push_back("1");
	res.push_back("2");
	string top;
	while(1){
		// lay ra phan tu o dau hang doi
		string top=q.front();
		if(top.size()==13) break;
		q.pop();
		res.push_back(top+'0');
		res.push_back(top+'1');
		res.push_back(top+'2');
		q.push(top+'0');
		q.push(top+'1');
		q.push(top+'2');
	}
}
int main()
{
	init();
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int cnt=0;
		for(int i=0;i<res.size();i++){
			if(check(res[i])){
				cnt++;
				cout<<res[i]<<" ";
			}
			if(cnt==n) break;
		}
		cout<<endl;
	}
}
