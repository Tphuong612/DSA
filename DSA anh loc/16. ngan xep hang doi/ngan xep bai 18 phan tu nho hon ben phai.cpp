#include <bits/stdc++.h>
#define ll long long
// dau tien lon hon ben phai: duyet tu trai qua phai
//dau tien lon hon ben trai: duyet tu phai sang trai

using namespace std;
void great(int a[], int b[], int n){// tim phan tu dau tien lon hon ben phai
	stack <int> st;
    st.push(0);
    for(int i=1; i<n; i++){
        while(!st.empty() && a[i]>a[st.top()]){
            b[st.top()]=i;// gan chi so
            st.pop();
        }
        st.push(i);
    }
	while(!st.empty()){
   		b[st.top()]=-1;
   		st.pop();
	}
}
void small(int a[], int b[], int n){//tim phan tu dau tien nho hon ben phai
	stack <int> st;
    st.push(0);
    for(int i=1; i<n; i++){
        while(!st.empty() && a[i]<a[st.top()]){
            b[st.top()]=a[i];// gan chi so
            st.pop();
        }
        st.push(i);
    }
	while(!st.empty()){
   		b[st.top()]=-1;
   		st.pop();
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n+5], b[n+5], c[n+5];
	for(int i=0; i<n; i++) cin>>a[i];
	great(a, b, n);
	small(a, c, n);

	for(int i=0; i<n; i++){
		if(b[i]==-1) cout<<-1<<" ";
		else cout<<c[b[i]]<<" ";
	}
}
