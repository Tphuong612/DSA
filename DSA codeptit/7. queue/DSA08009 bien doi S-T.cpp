#include <bits/stdc++.h>
using namespace std;
int solve(int s, int t){
	queue <pair<int, int>> q;// luu gia tri, so buoc thuc hien
	set <int> se;
	se.insert(s);// khoi tao
	q.push({s, 0});// khoi tao
	while(!q.empty()){
		auto top=q.front(); 
		q.pop();
		if(top.first==t) return top.second;
		if(top.first*2==t || top.first-1==t) return top.second+1;
		if(se.find(top.first*2)==se.end()&&top.first<t){// khi ma phan tu do chua xuat hien trong set, va chua den dc gia tri t
			q.push({top.first*2, top.second+1});
			se.insert(top.first*2);	
		}
		if(se.find(top.first-1)==se.end()&&top.first>1){// khi ma phan tu do chua xuat hien trong set, va chua den dc gia tri t
			q.push({top.first-1, top.second+1});
			se.insert(top.first-1);	
		}
	}
}
int main()
{
	int k;
	cin>>k;
	while(k--){
		int s, t;
		cin>>s>>t;
		cout<<solve(s,t)<<endl;
	}
}
