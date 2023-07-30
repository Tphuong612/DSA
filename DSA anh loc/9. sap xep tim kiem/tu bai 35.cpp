#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;

int main(){
    ll n,x;
    cin >> n>>x;
    ll a[n];
    for(ll &x:a)
        cin >>x;
    sort(a,a+n);
    ll l=0, r=n-1;
    ll cnt=0;
    while(l <r){
        if( (a[l]+a[r]) >x){
//            cout <<a[r] <<"\n";
            ++cnt;
            --r;
        }
        else{
            ++cnt;
//            cout <<a[l] <<" "<<a[r] <<" \n";
            ++l;
            --r;
        }
    }
//    cout <<a[l] <<" "<<a[r];
    if(a[l]==a[r] && a[l]<=x)
        ++cnt;
    cout <<cnt;
}
