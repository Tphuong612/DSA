#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long m = 1000000007;

    long long tich=1;
    for(int i=0;i<n;i++){
        long long x;
        cin>>x;
        tich*=x;
        tich%=m;
    }
    cout<<tich;
}
