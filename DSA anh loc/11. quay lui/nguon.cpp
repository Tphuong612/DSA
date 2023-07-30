// so xa cach
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int n, used[100], X[100];

bool check(){
    for(int i = 1; i <= n - 1; i++){
        if(abs(X[i] - X[i + 1]) == 1) return false;
    }
    return true;
}

void Try(int i){
    for(int j = 1; j <= n; j++){
        if(!used[j]){
            X[i] = j;
            used[j] = 1;
            if(i == n){
                if(check()){
                    for(int i = 1; i <= n; i++){
                        cout << X[i];
                    }
                    cout << endl;
                }
            }
            else{
                Try(i + 1);
            }
            used[j] = 0;
        }
    }
}

int main(){
    cin >> n;
    Try(1);

}
//doi cho chu so
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

string s;
vector<string>v;
int k;

void Try(int i, int cnt){
    char tmp = s[i];
    int x;
    int OK = 0;
    for(int j = i+1; j<s.length(); j++){
        if(s[j]>s[i]){
            tmp = s[j];
            x = j;
            OK = 1;
        }
    }
    if(OK) cnt++;
    swap(s[i],s[x]);
    v.push_back(s);
    if(cnt==k) return;
    else if(i+1<s.length()) Try(i+1,cnt);
}

int main() {
    cin >> k >> s;
    Try(0,0);
    sort(v.begin(),v.end());
    cout << v[v.size()-1];
}
// dien thoai cuc gach
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

string a[100] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

string s, res;
int n;

void Try(int i){
    int idx = s[i] - '0';
    for(int j = 0; j < a[idx].size(); j++){
        res += a[idx][j];
        if(res.size() == n){
            cout << res << ' ';
        }
        else{
            Try(i + 1);
        }
        res.pop_back();
    }
}

int main(){
    cin >> s;
    sort(s.begin(), s.end());
    n = s.size();
    Try(0);

}
// bai 17
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool check(string s){
    stack<char> st;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '[') st.push(s[i]);
        else{
            if(st.empty()) return false;
            char c = st.top(); st.pop();
            if(s[i] == ')' && c != '(') return false;
            if(s[i] == '}' && c != '{') return false;
            if(s[i] == ']' && c != '[') return false;
        }
    }
    return st.empty();
}

string s = "()[]{}";
string res;
vector<string> ans;
int n;

void Try(int i){
    for(int j = 0; j < s.size(); j++){
        res += s[j];
        if(res.size() == n){
            if(check(res)){
                ans.push_back(res);
            }
        }
        else{
            Try(i + 1);
        }
        res.pop_back();
    }
}

int main(){
    cin >> n;
    if(n % 2 == 1){
        cout << "NOT FOUND\n";
    }
    else{
        Try(0);
        for(string x : ans) cout << x << ' ';
    }
}
//
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int n, a[100], X[100], sum = 0;
vector<vector<int>> res;
vector<int> v;

void nhap(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
}

void Try(int pos){
    for(int j = pos; j <= n; j++){
        v.push_back(a[j]);
        sum += a[j];
        if(sum % 2 == 1){
            res.push_back(v);
        }
        Try(j + 1);
        sum -= a[j];
        v.pop_back();
    }
}

int main(){
    nhap();
    Try(1);
    sort(res.begin(), res.end());
    if(res.size() == 0){
        cout << "NOT FOUND\n";
    }
    else{
        for(auto it : res){
        for(int x : it) cout << x << ' ';
        cout << endl;
    }
    }
}
//
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

int n, m, ok = 0, used[100][100];
string a[100], s, word = "";

void nhap(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> s;
}

void Try(int i, int j){
    if(ok) return;
    if(word == s){
        ok = 1;
    }
    for(int k = 0; k < 4; k++){
        int i1 = i + dx[k], j1 = j + dy[k];
        if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && !used[i1][j1]){
            used[i1][j1] = 1;
            word += a[i1][j1];
            if(word == s){
                ok = 1; return;
            }
            else if(s.find(word) != string::npos){
                Try(i1, j1);
            }   
            used[i1][j1] = 0;
            word.pop_back();
        }
    }
}

int main(){
    nhap();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == s[0]){
                memset(used, 0, sizeof(used));
                word = "";
                word += a[i][j];
                used[i][j] = 1;
                Try(i, j);
                if(ok){
                    cout << "YES\n"; return 0;
                }
            }
        }
    }
    cout << "NO\n";
}
//
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int n, k, sum = 0, ok = 0;
vector<int> v;

void Try(int init){
    for(int j = init; j <= 9; j++){
        sum += j;
        v.push_back(j);
        if(v.size() == k && sum == n){
            ok = 1;
            for(int l = 0; l < v.size(); l++){
                cout << v[l];
                if(l != v.size() - 1) cout << " + ";
            }
            cout << endl;
        }
        else if(v.size() < k && sum < n){
            Try(j + 1);
        }
        v.pop_back();
        sum -= j;
    }
}

int main(){
    cin >> n >> k;
    Try(1);
    if(!ok) cout << "NOT FOUND\n"; 
}
//
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

vector<string> res;
int n;
string s, S1;

void Try(int pos){
    for(int j = pos; j < n; j++){
        if(isalpha(S1[j])){
            // 
            char c = tolower(S1[j]);
            char d = toupper(S1[j]);

            for(char x : {c, d}){
                s += x;
                if(s.size() == n){
                    res.push_back(s);
                }
                else Try(j + 1);
                s.pop_back();
            }
        }
        else{
            s += S1[j];
            if(s.size() == n) res.push_back(s);
            else Try(j + 1);
            s.pop_back();
        }
    }
}


int main(){
    cin >> S1;
    n = S1.size();
    Try(0);
    sort(res.begin(), res.end());
    for(string x : res) cout << x << '\n';
}
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool nt(ll n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return n > 1;
}

vector<int> prime;

int n, k, sum = 0, ok = 0;
vector<int> v;

void Try(int init){
    for(int j = init; j <= prime.size(); j++){
        sum += prime[j];
        v.push_back(prime[j]);
        if(v.size() == k && sum == n){
            ok = 1;
            for(int l = 0; l < v.size(); l++){
                cout << v[l];
                if(l != v.size() - 1) cout << " + ";
            }
            cout << endl;
        }
        else if(v.size() < k && sum < n){
            Try(j + 1);
        }
        v.pop_back();
        sum -= prime[j];
    }
}

int main(){
    for(int i = 1; i <= 500; i++) if(nt(i)) prime.push_back(i);
    cin >> n >> k;
    Try(0);
    if(!ok) cout << "NOT FOUND\n"; 
}
//
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool check(string s){
    int l = 0, r = s.size() - 1;
    while(l < r){
        if(s[l] != s[r]) return false;
        ++l; --r;
    }
    return true;
}

vector<vector<string>> res;
vector<string> v;

void Try(int start, string s){
    if(start >= s.size()) res.push_back(v);
    for(int end = start; end < s.size(); end++){
        if(check(s.substr(start, end - start + 1))){
            v.push_back(s.substr(start, end - start + 1));
            Try(end + 1, s);
            v.pop_back();
        }
    }
}


int main(){
    string s; cin >> s;
    Try(0, s);
    for(auto it : res){
        for(string x : it) cout << x << ' ';
        cout << endl;
    }
}