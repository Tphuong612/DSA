#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+5];
	for(int i=0;i<n;i++) cin>>a[i];
	int k;
	cin>>k;
	int dem=0;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++)
			if(a[i]+a[j]==k) dem++;
	}
	cout<<dem;
}
/* cách 2: đếm tần số xuất hiện của từng phần tử, kiêm tra xem tổng giá tr
của 2 phần tử có bằng k không, nếu bằng thì nhân với tần xuất xuất hiện của chúng
LUU Y: 4=2+2 XEM XET NHUNG TRUONG HOP TUONG TU
*/
/* C3: kĩ thuật 2 con trỏ */