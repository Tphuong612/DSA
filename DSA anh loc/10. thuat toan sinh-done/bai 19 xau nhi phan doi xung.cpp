#include <bits/stdc++.h>
using namespace std;
bool final=false;
int n, a[20];
int check()
{
    for(int i=1;i<=n/2;i++)
        if(a[i]!=a[n-i+1]) return 0;
    return 1;
}
void sinh()
{
    int i=n;
    while(i>=1&&a[i]==1){
        a[i]=0;
        i--;
    }
    if(i==0) final=true;
    else a[i]=1;
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++) a[i]=0;
    while(!final){
        if(check()){
            for(int i=1;i<=n;i++) cout<<a[i];
            cout<<endl;
        }    
        sinh();
    }
}
