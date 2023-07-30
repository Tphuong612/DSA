#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    long long a[n], b[m];
    set<long long> se;

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; ++i)
    {
        cin >> b[i];
        se.insert(b[i]);
    }
    for (int i = 0; i < n; i++)
    {

        if (se.count(a[i]))
        {
            cout << a[i] << ' ';
            se.erase(a[i]);
        }
    }
/*
4 5
10 20 20 30
10 20 30 40 50
10 20 20 30
*/
    ////    sort(v.begin(), v.end());

    //    for(auto i:v) cout<<i<<" ";
}