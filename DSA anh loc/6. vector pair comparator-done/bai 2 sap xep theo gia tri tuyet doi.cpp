#include <bits/stdc++.h>
using namespace std;
struct so{
	int gtr;
	int cl;//chenh lech 
};
bool cmp1(so a, so b)
{
	if(a.cl==b.cl) return a.gtr<b.gtr; 
	return a.cl<b.cl;
}
bool cmp2(so a, so b)
{
    if (a.gtr % 2 == 0 && b.gtr % 2 == 0)
        return a.gtr < b.gtr;
    if (a.gtr % 2 == 1 && b.gtr % 2 == 1)
        return b.gtr <  a.gtr;
    if (a.gtr % 2 == 0) return true;
    return false;
}
int main()
{
	int n, x;
	cin>>n>>x;
	so a[n];
	
	for(int i=0;i<n;i++){
		cin>>a[i].gtr;
		a[i].cl=abs(a[i].gtr-x);

	}
	sort(a, a+n, cmp1);
	for(int i=0;i<n;i++) cout<<a[i].gtr<<" ";
	cout<<endl;
	
	sort(a, a+n, cmp2);
	for(int i=0;i<n;i++) cout<<a[i].gtr<<" ";
	cout<<endl;
	
}
