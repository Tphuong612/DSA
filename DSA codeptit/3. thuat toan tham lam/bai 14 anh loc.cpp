#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int n, S, a[100];
int X[100]; //X[0], X[1], //

void nhap(){
    cin >> n >> S;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
}

vector<vector<int>> res;

void Try(int i, int sum, int start){
    //tim gia tri de gan cho X[i]
    for(int pos = start; pos < n; pos++){
        X[i] = a[pos];
        sum += a[pos];
        if(sum == S){
            vector<int> tmp(X + 1, X + i + 1);
            res.push_back(tmp);
        }
        else if(sum < S){
            Try(i + 1, sum, pos);
        }
        //backtrack
        sum -= a[pos];
    }
}

int main(){
    nhap();
    Try(1, 0, 0);
    if(res.size() == 0){
        cout << "-1\n";
    }
    else{
        cout << res.size() << endl;
        for(vector<int> it : res){
            cout << "{";
            for(int i = 0; i < it.size(); i++){
                cout << it[i];
                if(i != it.size() - 1) cout << " ";
                else cout << "}\n";
            }
        }
    }
}