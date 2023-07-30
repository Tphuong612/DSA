#include <bits/stdc++.h>// dem so luong day con co cac phan tu khac nhau ko vuot qua k

using namespace std;
int main()
{
	int n, k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int l=0, r;
	long long dem=0;
	map<int, int> m;
	for(r=0;r<n;r++){
		m[a[r]]++;
		while(m.size()>k){//khi do dai cua map lon hon k thi ta se thu hep day
			m[a[l]]--;
			if(m[a[l]]==0) m.erase(a[l]);
			l++;
			
		}
//		cout<<r<<" "<<r-l+1<<endl;
		dem+=r-l+1;
	}
	cout<<dem;
}
