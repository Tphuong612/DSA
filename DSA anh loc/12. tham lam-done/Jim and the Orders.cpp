#include <bits/stdc++.h>
using namespace std;
struct customer{
	int stt, order_time, prep_time, serve_time;
};
bool cmp(customer a, customer b){
	if(a.serve_time==b.serve_time) return a.stt<b.stt;
	return a.serve_time<b.serve_time;
}
int main()
{
	int n;
	cin>>n;
	customer a[n];
	for(int i=0;i<n;i++){
		a[i].stt=i+1;
		cin>>a[i].order_time>>a[i].prep_time;
		a[i].serve_time=a[i].order_time+a[i].prep_time;
	}
	sort(a, a+n, cmp);
	for(int i=0;i<n;i++) cout<<a[i].stt<<" ";
	
}
