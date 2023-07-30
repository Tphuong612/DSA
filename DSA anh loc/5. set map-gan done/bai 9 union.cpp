#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	cin>>n>>m;
	long long a[n], b[m];
	set <long long> s;// chua giao cua 2 mang
	for(int i=0;i<n;i++){
		cin>>a[i];
		s.insert(a[i]);
	}
	for(int i=0;i<m;i++){
		cin>>b[i];
		s.insert(b[i]);
	}
	for(auto it = s.rbegin(); it != s.rend(); ++it){
        cout << *it << ' ';
    }
}
