#include <bits/stdc++.h>
using namespace std;
long long a[200005], n,k;
int check(long long m)
{
	int cnt=0;// dem so luong day con thoa man
	long long tong=0;// tinh tong day con
	// dung de check xem tong cac phan tu trong day con co vuot qua gia tri m cho phep hay ko
	for(int i=0;i<n;i++){
		tong+=a[i];
		if(tong>m){
			++cnt;
			tong=a[i];// gia tri ban dau cua day con phia sau
		}
	}
	++cnt;// vong for tren chua dem day con cuoi cung
	if(cnt<=k) return true;
	else return false;
}
int main()
{
	cin>>n>>k;
	long long left=-1, right=0;// left, right deu la gia tri cua tong day con
	//left la so lon nhat trong day, right la tong cua tat ca cac phan tu trong day con
	for(int i=0;i<n;i++){
		cin>>a[i];
		right+=a[i];
		left=max(a[i], left);
	}
	long long ans=-1;// luu gia tri cua tong lon nhat trong day con
	while(left<=right){
		long long mid=(left+right)/2;
		if(check(mid)){
			ans=mid;
			right=mid-1;//gia du neu giam mid thi co gia tri ans nho hon hay ko
		}
		else{// check false tuc la so luong day con toi da la m da vuot muc cua de bai
			left=mid+1;
		}
	}
	cout<<ans;
}
