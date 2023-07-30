#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

bool sol(string str){
	stack <char> s;
	for(int i=0; i<str.size(); i++){
		if(str[i]!=')'){
			s.push(str[i]);
		}
		else{
			if(s.empty())// truong hop: )
				return false;				
			if(s.top()=='(') //vd: a+b()
				return false;
			while(!s.empty() && s.top()!='(') {// TIm den dau ngoac mo dau tien neu no rong thi return
				s.pop();
			}
			if(s.empty())
				return false;// TH: a+b)
			s.pop();
		}
	}
	while(!s.empty()){
		if(s.top()=='(')
			return false;
		s.pop();
	}
	return true;
}

int main(){
	string str;
	cin >>str;
	if(!sol(str))
		cout <<"YES";
	else
		cout <<"NO";
}