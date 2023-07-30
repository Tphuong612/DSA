#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int X[100], n, cnt, final = 0;

void ktao(){
    cnt = 1;
    X[1] = n;
}

vector<vector<int>> res;

void sinh(){
    int i = cnt;
    while(i >= 1 && X[i] == 1){
        --i;
    }
    if(i == 0){
        final = 1;
    }
    else{
        X[i]--;
        int d = cnt - i + 1;
        cnt = i;
        int q = d / X[i], r = d % X[i];
        for(int j = 1; j <= q; j++){
            X[i + j] = X[i];
        }
        cnt += q;
        if(r > 0){
            X[cnt + 1] = r;
            ++cnt; 
        }
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    cin >> n;
    ktao();
    while(!final){
        vector<int> tmp(X + 1, X + cnt + 1);
        sort(tmp.begin(), tmp.end());
        res.push_back(tmp);
        for(int x : tmp) cout << x << ' ';
        cout << endl;
        sinh();
    }
    sort(res.begin(), res.end());
    for(auto it : res){
        for(int x : it){
            cout << x << ' ';
        }
        cout << endl;
    }
}