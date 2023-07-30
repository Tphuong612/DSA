#include <bits/stdc++.h>
using namespace std;
/*
struct so{
	int gtr;
	int index;
};
bool cmp(so a, so b)
{
	if(a.index%2==0) return a.gtr<=b.gtr;
	else return a.gtr>=b.gtr;
}
int main()
{
	int n;
	cin>>n;
	so a[n];
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		a[i].gtr=x;
		a[i].index=i+1;
	}
	sort(a, a+n, cmp);
	for(auto x: a) cout<<x.gtr<<" ";
}
*/
int main()
{
	int n;
    cin >>n;
    vector <int> v;
    for(int i=0; i<n; i++){//nhap mang
        int tmp;
        cin >>tmp;
        v.push_back(tmp);
    }
    
    sort(v.begin(), v.end());// sap xep tang dan
    int m=(n+1)/2;
    vector <int> v1(v.begin(), v.begin()+m),
    v2(v.begin()+m, v.end());// chia doi mang
    int cnt1=0,
    cnt2=0;
    for(int i=1; i<=n; i++){// lan luot in ra
        if(i%2==0)
            cout <<v2[cnt2++];
        else
            cout <<v1[cnt1++];
        cout <<" ";
    }
}