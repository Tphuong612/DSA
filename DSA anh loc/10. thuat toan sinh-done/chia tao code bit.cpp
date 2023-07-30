#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    ll ans = 1e18;
    for(int i = 0; i < (1 << n); i++){
        // kiem tra tung bit cua so i xem no la bit 0 hay bit 1
        ll s1 = 0, s2 = 0;
        for(int j = 0; j < n; j++){
            if(i & (1 << j)){
                s1 += a[j];
            }
            else s2 += a[j];
        }
        ans = min(ans, abs(s1 - s2));
    }
    cout << ans << endl;
}