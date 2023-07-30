#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    map<string, int> m;
    stringstream ss(s);
    string tmp;
    while(ss>>tmp){
    	m[tmp]++;
	}
    int min=1000005, max=-1;
    string gtrmin, gtrmax;
    for(auto x:m){
        if(x.second>=max){
            max=x.second;
            gtrmax=x.first;
        }
        if(x.second<=min){
            min=x.second;
            gtrmin=x.first;
        }
    }
    cout<<gtrmax<<" "<<max<<endl;
    cout<<gtrmin<<" "<<min<<endl;
    
}

