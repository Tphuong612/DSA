#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int k;
		cin>>k;
		string s;
		cin>>s;
		priority_queue <long long> q;// hang doi uu tien lay max
		map <char, int> m;// dem so lan xuat hien
		for(int i=0;i<s.length();i++){
			m[s[i]]++;
		}
		for(int i=0;i<s.length();i++){
			if(m[s[i]]!=0){
				q.push(m[s[i]]);// dua vao priority_queue de tim max
				m[s[i]]=0;
			}
		}
		long long sum=0;
		while(k--){// giam di k ki tu
			if(q.top()==0) break;// neu xoa het so lan xuat hien cua ki tu do
			else{
				int c=q.top()-1;// xoa di 1 ki tu
				q.pop();// vi lay ra de duyet
				q.push(c);// bo lai vao trong stack
			}
		}
		while(!q.empty()){// tinh tong
			sum+=(long long) q.top()*q.top();
			q.pop();
		}
		cout<<sum<<endl;
	}
}
