#include <bits/stdc++.h>// dem so luong day con co do chech lech lon nhat ko vuot qua k

using namespace std;
int main()
{
	int n, k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int l=0, r;
	long long dem=0;
	multiset <int> s;
	for(r=0;r<n;r++){
		s.insert(a[r]);
		while(*s.rbegin()-*s.begin()>k){//khi do dai cua map lon hon k thi ta se thu hep day
			auto it=s.find(a[l]);
			s.erase(it);
			l++;	
		}
//		cout<<r<<" "<<r-l+1<<endl;
		dem+=r-l+1;
	}
	cout<<dem;
}
