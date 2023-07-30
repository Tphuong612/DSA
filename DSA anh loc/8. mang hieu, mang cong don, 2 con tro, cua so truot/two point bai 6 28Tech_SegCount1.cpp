#include <bits/stdc++.h>// dem so luong day con co tong <=s;
using namespace std;
int main()
{
    long long n,s;
    cin>>n>>s;
    long long a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int l=0,r;
    long long sum=0;
    long long dem=0;
    for(r=0;r<n;r++){
        sum+=a[r];
        while(sum>s){
            sum-=a[l];
            l++;
        }
//        cout<<r<<" "<<l<<endl;
        dem+=r-l+1;
    }
    cout<<dem;
}
