#include <bits/stdc++.h>
using namespace std;
int N, n, k;
string b[32], c[32];
int d[32];
/*
mang b chua cac ki tu sau khi da loai bo trung nhau
mang c chua kq in ra man hinh
mang d chua gia tri chay
*/
set <string> s;
void result()
{
	for(int i=1;i<=k;i++) cout<<c[i]<<" ";
	cout<<endl;
}
void Try(int i)
{
	for(int j=d[i-1]+1;j<=n-k+i;j++){
		c[i]=b[j];
		d[i]=j;// co tac dung lam bien chay
		if(i==k) result();
		else Try(i+1);
	}
}
int main()
{
	cin>>N>>k;
	for(int i=1;i<=N;i++){
		string x;
		cin>>x;
		s.insert(x);
	}
	n=s.size();
	int dem=0;
	for(auto i: s){
		dem++;
		b[dem]=i;
	}
	d[0]=0;
	Try(1);
	
}
