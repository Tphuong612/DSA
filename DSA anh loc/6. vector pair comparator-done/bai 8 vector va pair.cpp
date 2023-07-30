#include <bits/stdc++.h>
using namespace std;
struct diem{
	int x;
	int y;
	int z;
	long long tong;
};
int main()
{
	int n;
	cin>>n;
	vector <diem> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i].x>>v[i].y>>v[i].z;
		v[i].tong=v[i].x+v[i].y+v[i].z;
	}
	for(auto i: v){
		cout<<i.tong<<" ";
	}
}
