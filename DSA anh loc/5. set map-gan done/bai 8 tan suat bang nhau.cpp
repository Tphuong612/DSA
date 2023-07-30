#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
    cin>>n;
    map <long long, int> m;
    for(int i=0;i<n;i++){
        long long x;
        cin>>x;
        m[x]++;// dem tan suat xua hien cua cac ptu trong mang
    }
    map <int, int> check;
    for(auto i : m){
        check[i.second]++;
    }
    
	
}
