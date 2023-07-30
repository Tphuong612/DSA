#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;
int n;
int a[20];
ll s=0;
vector<int> v;
multiset<string> st;

void ins(){
	string tmp;
	for(auto x:v){
		tmp+=to_string(x)+" ";
	}	
	tmp.pop_back();
	st.insert(tmp);
}
void Try(int i){
	for(int j=i+1; j<=n; j++){
		s+=a[j];
		v.push_back(a[j]);
		if(s%2==1)
			ins();
		Try(j);
		s-=a[j];
		v.pop_back();
	}
}
int main(){
	cin >>n;
	for(int i=1; i<=n; i++){
		cin >>a[i];
	}
	Try(0);
	if(st.size()==0){
		cout <<"NOT FOUND";
	}
	else{
		for(auto x:st){
			cout <<x <<endl;
		}
	}
}