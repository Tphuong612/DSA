#include <bits/stdc++.h>
using namespace std;
struct diem{
	int x;
	int y;
	double kc;
};
bool cmp(diem a, diem b)
{
	if(a.kc==b.kc&&a.x==b.x) return a.y<b.y;
	if(a.kc==b.kc) return a.x<b.x;
	return a.kc<b.kc;
}
int main()
{
	int n;
	cin>>n;
	vector <diem> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i].x>>v[i].y;
		v[i].kc=sqrt(v[i].x*v[i].x+v[i].y*v[i].y);
	}
	sort(v.begin(), v.end(), cmp);
	for(auto i: v)
		cout<<i.x<<" "<<i.y<<endl;
	
}
