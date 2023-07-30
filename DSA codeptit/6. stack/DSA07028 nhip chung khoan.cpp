#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	int a[n+5], b[n+5];
    	stack <int> st;// luu chi si bat dau
    	for(int i=1;i<=n;i++) cin>>a[i];
    	for(int i=1;i<=n;i++){
    		while(st.size() && a[i]>=a[st.top()]) st.pop();
    		if(st.empty()) b[i]=0;// mang b chua chi so bat dau
    		// stack rong khi moi bat dau dem hoac TH lon hon ca day do
    		else b[i]=st.top();// luu chi so bat dau ma gia tri c[i] co the lon hon => do dai chinh la vi tri-(gia tri bat dau)
    		st.push(i);
		}
		for(int i=1;i<=n;i++) cout<<i-b[i]<<" ";
		cout<<endl;
	}
}
