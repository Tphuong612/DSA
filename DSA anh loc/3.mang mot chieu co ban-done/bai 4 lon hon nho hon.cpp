#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+5];
    for(int i=0;i<n;i++) cin>>a[i];
    int x;
    cin>>x;
    sort(a,a+n);
    int dem1=0, dem2=0;
    for(int i=0;i<n;i++)
        {
            if(a[i]<x) dem1++;
            if(a[i]>x) dem2++;
        }
    cout<<dem1<<endl<<dem2;
}
