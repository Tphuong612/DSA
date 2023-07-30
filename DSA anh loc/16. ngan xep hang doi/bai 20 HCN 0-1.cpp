#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, m;
int a[1005][1005];
void nhohonbenphai(int a[], int r[], int n){// tim vi tri phan tu dau ten nho hon ben phai
	stack <int> st;
	for(int i=0; i<n; i++){
		while(!st.empty() && a[i]<a[st.top()]){
			r[st.top()]=i;
			st.pop();
		}
		st.push(i);
	}
	while(!st.empty()){
		r[st.top()]=n;
		st.pop();
	}
}

void nhohonbentrai(int a[], int l[], int n){// tim vi tri phan tu dau tien nho hon ben trai
	stack <int> st;
	for(int i=n-1; i>=0; i--){
		while(!st.empty() && a[i]<a[st.top()]){
			l[st.top()]=i;
			st.pop();
		}
		st.push(i);
	}
	while(!st.empty()){
		l[st.top()]=-1;
		st.pop();
	}
}
int height[1005][1005];
void xuly(){
	for(int j=0; j<m; j++){// duyet theo cot, duyet doc
		int cnt=0;
		for(int i=0; i<n; i++){
			if(a[i][j]) cnt++;
			else cnt=0;
			height[j][i]=cnt;
		}
	}
}

int main()
{
	cin>>n>>m;// n hang, m cot
	
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			cin>>a[i][j];
	
	xuly();
	long long ans=0;
	for(int i=0; i<n; i++){
		int b[m];
		for(int j=0; j<m; j++){
			b[j]=height[j][i];
		}
		int l[m], r[m];
		nhohonbenphai(b, r, m);
		nhohonbentrai(b, l, m);
		ll dientich[m];
		for(int j=0; j<m; j++){
			dientich[j]=1ll*b[j]*(r[j]-l[j]-1);
		}
		ll res=*max_element(dientich, dientich+m);
		ans=max(ans, res);
	}
	cout<<ans;
}
