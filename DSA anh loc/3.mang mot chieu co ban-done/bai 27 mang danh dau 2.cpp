#include <bits/stdc++.h>
using namespace std;
long long b[1000005]={0};
int main()
{
    int n;
    cin>>n;
    long long a[n+5];
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[a[i]]++;
    }
    int dem=0;
    for(int i=0;i<n;i++){
        if(b[a[i]]!=0){
            cout<<a[i]<<" "<< b[a[i]]<<endl;
            b[a[i]]=0;
        }
    }
}
