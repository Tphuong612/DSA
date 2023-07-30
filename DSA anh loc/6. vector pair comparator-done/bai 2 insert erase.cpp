#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin>>m;
    vector <int> v(m);
    for(int i=0;i<m;i++){
        cin>>v[i];
    }
    int t;//so lan truy van
    cin>>t;
    while(t--)
    {
        int k;// loai truy van
        cin>>k;
        if(k==1){
            int a, val;// a la vi tri chen
            cin>>a>>val;
            if(a>=0&&a<=v.size()) v.insert(v.begin()+a, val);
        }
        if(k==2){
            int b;// chi so phan tu xoa
            cin>>b;
            if(b>=0&&b<=v.size()-1&&!v.empty()) v.erase(v.begin()+b);
        }
    }
    if(v.empty()) cout<<"EMPTY";
    else{
        for(int i:v) cout<<i<<" ";
    }
    
}

