#include <bits/stdc++.h>
using namespace std;
long long merge(int a[], int l, int m, int r){
	vector <int> x(a+l, a+m+1);// nua trai
	vector <int> y(a+m+1, a+r+1);// nua phai
	int i=0, j=0;
	long long cnt=0;
	while(i<x.size()&&j<y.size()){
		if(x[i]<=y[j]){// phan tu ben trai nho hon phan tu ben phai=> chieu thuan
			a[l]=x[i];
			++l; ++i;
		}
		else{// chieu nguoc=> tao nghich the
			cnt+=x.size()-i;
			a[l]=y[j];
			++l; ++j;
		}
	}
	while(i<x.size()){
		a[l]=x[i];
		++l; ++i;
	}
	while(j<y.size()){
		a[l]=y[j];
		++l;++j;
	}
	return cnt;
}
long long merge_sort(int a[], int l, int r){
	long long dem=0;
	if(l<r){
		int m=(l+r)/2;
		dem+=merge_sort(a, l, m);// cap nghich the khi tron nua ben trai
		dem+=merge_sort(a, m+1, r);// cap nghich the khi tron nua ben trai
		dem+=merge(a, l, m, r);// nua no nua kia
	}
	return dem;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	cout<<merge_sort(a, 0, n-1);
}
