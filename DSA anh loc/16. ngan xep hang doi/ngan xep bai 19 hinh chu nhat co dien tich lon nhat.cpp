#include <bits/stdc++.h>
#define ll long long
using namespace std;
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
int main()
{
	int n;
	cin>>n;
	int a[n+5], l[n+5], r[n+5];
	for(int i=0; i<n; i++) cin>>a[i];
	nhohonbenphai(a, r, n);
	nhohonbentrai(a, l, n);
	long long dientich[n+5];
	for(int i=0; i<n; i++){
		dientich[i]=1ll*a[i]*(r[i]-l[i]-1);
		//cout<<dientich[i]<<" ";
	}
	cout<<*max_element(dientich, dientich+n);
	
}
