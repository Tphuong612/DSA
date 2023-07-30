#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
    cin >>n;
    vector <int> v1,v2;
    for(int i=0; i<n; i++){
        int tmp;
        cin >>tmp;
        if(tmp!=0)
            v1.push_back(tmp);
        else
            v2.push_back(tmp);            
    }
    // sort(v1.begin(), v1.end());
    for(auto x:v1)
        cout <<x <<" ";
    for(auto x:v2)
        cout <<x <<" ";
}
