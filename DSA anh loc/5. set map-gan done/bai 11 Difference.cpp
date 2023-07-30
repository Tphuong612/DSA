#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;
    long long a[n], b[m];
    set <long long> se;
    set <long long> khac;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;++i){
        cin>>b[i];
        se.insert(b[i]);
    }
    for(int i=0;i<n;i++){
        if(se.count(a[i])==0) khac.insert(a[i]);
    }
   
    for(auto i:khac) cout<<i<<" ";
}
