#include <bits/stdc++.h>
using namespace std;
long long b[1000005]={0};
int main()
{
    int n;
    cin>>n;
    long long a[n+5];
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[a[i]]++;
    }
    int max=0;
    for(int i=0;i<n;i++){
        if(b[a[i]]>max) max=b[a[i]];
    }
    for(int i=0;i<n;i++){
        if(b[a[i]]==max){
        	cout<<a[i]<<" "<<b[a[i]];
        	break;
		}
    }
}
