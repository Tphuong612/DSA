#include <bits/stdc++.h>
using namespace std;
vector <vector<int>> v;
int n, a[20], x[20];
int check()
{
	int sum=0;
	for(int i=0;i<n;i++) sum+=x[i]*a[i];
	if(sum%2==1) return 1;
	else return 0;
}
void Try(int i)
{
	for(int j=0;j<=1;j++){
		x[i]=j;
		if(i==n-1){
			vector <int> tmp;
			if(check()){
				for(int k=0;k<n;k++) 
				{
					if(x[k]==1) tmp.push_back(a[k]);
				}
				v.push_back(tmp);
			}
			
		}
		else Try(i+1);
	}
}

int main()
{

	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	Try(0);

	sort(v.begin(), v.end());
	if(v.size()==0) cout<<"NOT FOUND";
	for(int i=0;i<v.size();i++){
		for(auto x: v[i]) cout<<x<<" ";
		cout<<endl;
	}
}
