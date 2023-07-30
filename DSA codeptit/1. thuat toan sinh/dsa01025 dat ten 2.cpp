#include <bits/stdc++.h>
using namespace std;
int n, k;
char b[32], c[32];
int d[32];
/*
mang b chua cac gia tri ban dau
mang c chua kq in ra man hinh
mang d chua gia tri chay
*/
void result()
{
	for(int i=1;i<=k;i++) cout<<c[i];
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
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=n;i++) b[i]=i-1+'A';	
		d[0]=0;
		Try(1);
	}
	
}
