#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		stack <int> st;
		int b[n];
		for(int i=0;i<n;i++){
			if(st.empty()) st.push(i);// day chi so vao
			else{
				while(!st.empty()&& a[i]>a[st.top()]){// st.top() la chi so
					b[st.top()]=a[i];
					st.pop();
				}
				st.push(i);
			}
		} 
		while(!st.empty()){
			b[st.top()]=-1;
			st.pop();
		}
		for(int i=0;i<n;i++){
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}
}
