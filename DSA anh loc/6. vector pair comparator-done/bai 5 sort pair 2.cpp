#include <bits/stdc++.h>
using namespace std;
struct diem{
	int x;
	int y;
	int z;
};
bool cmp(diem a, diem b)
{
	if(a.y==b.y&&a.x==b.x) return a.z<b.z;
	if(a.x==b.x) return a.y<b.y;
	return a.x<b.x;
}
int main()
{
	int n;
	cin>>n;
	vector <diem> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i].x>>v[i].y>>v[i].z;
	}
	sort(v.begin(), v.end(), cmp);
	for(auto i: v)
		cout<<i.x<<" "<<i.y<<" "<<i.z<<endl;
}
