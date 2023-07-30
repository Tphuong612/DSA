#include <bits/stdc++.h>
using namespace std;
bool final=false;
int n, a[35], i;
vector <vector<int>> v;
void sinh()
{
    int j=i;
    while(j>=1&&a[j]==8){
        a[j]=6;
        j--;
    }
    if(j==0) final=true;
    else a[j]=8;
}
int main()
{
	cin>>n;
   	for( i=1;i<=9;i++){
	   	for(int j=1;j<=i;j++) a[j]=6;
	   	final=false;
	    while(!final){
	    	vector<int> tmp;
            for(int j=1;j<=i;j++) tmp.push_back(a[j]);
            for(int j=i;j>=1;j--) tmp.push_back(a[j]);
            v.push_back(tmp);
	        sinh();	
	    }
   	}
//   	cout<<v.size();
    for(int k=0;k<n;k++){
        for(int j=0;j<v[k].size();j++) cout<<v[k][j];
        cout<<" ";
    }
}
