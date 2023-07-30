#include <bits/stdc++.h>
#include <queue>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		priority_queue <int, vector<int>, greater<int>> q;
		for(int &x: a){
			cin>>x;
			q.push(x);
		}
		long long s=0;
		
		for(int i=0;i<n-1;i++){
			long long k=q.top();
			if(!q.empty()){
				s+=q.top();
				q.pop();
			}
			
			if(!q.empty()){
				s+=q.top();
				k+=q.top();
				q.pop();
			}
			q.push(k);
			
		}
		cout<<s<<endl;
	}
}
