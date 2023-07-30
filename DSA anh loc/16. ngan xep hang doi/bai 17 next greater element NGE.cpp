#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+5], b[n+5];
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) b[i]=0;
    stack <int> st;
    st.push(0);
    for(int i=1; i<n; i++){
        while(!st.empty() && a[i]>a[st.top()]){
            b[st.top()]=a[i];
            st.pop();
        }
        st.push(i);
    }
	while(!st.empty()){
   		b[st.top()]=-1;
   		st.pop();
	}
	for(int i=0; i<n; i++) cout<<b[i]<<" ";
}
