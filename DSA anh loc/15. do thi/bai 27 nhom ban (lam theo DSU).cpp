#include<bits/stdc++.h>
using namespace std;
int n,m;
vector <pair<int,int>> v;
int par[1005], sz[1005];
int ans=0;

void ktao(){
    cin >>n >>m;
    for(int i=1; i<=m; i++){
        int x, y;
        cin >>x >>y;
        v.push_back({x,y});// vector chua cac canh
    }
}

void Init(){
    for(int i=1; i<=n; i++){
        par[i]=i;
        sz[i]=1;
    }
}

int Find(int u){
    if(u==par[u]) return u;
    return par[u]=Find(par[u]);
}

void Union(int x, int y){
    x=Find(x);
    y=Find(y);
    if(x==y)
        return;
    
    if(sz[x]>sz[y])// luon lay x co size nho hon
        swap(x,y);
    par[x] = y;
    sz[y] += sz[x];// y dang co size lon hon
    
}
int main(){
    ktao();
    Init();

    for(auto x:v){
        Union(x.first, x.second);
    }
    
    cout <<*max_element(sz+1, sz+n+1);
}