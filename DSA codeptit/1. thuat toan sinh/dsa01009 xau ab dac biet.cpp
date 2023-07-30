#include <bits/stdc++.h>
using namespace std;
char a[30];
int n,k, dem=0;
vector <vector<char>> v;
vector<char> b;
bool check() {
	int countA=0;
	for (int i =0; i<n; i++) {
		if (a[i] == 'A') {
			int count=1;
			for (int j=i+1; j<i+k; j++) {
				if (a[j] == 'A') count++;
				else break;
			}
			if (count==k) countA++;
		}	
	}
	if (countA==1) return true;
	return false;
}
void result()
{
	for(int i=0;i<n;i++) b.push_back(a[i]);
}
void Try(int i)
{
	for(int j=0;j<=1;j++){
		a[i]=j+'A';
		if(i==n-1) {
			if(check()){
				dem++;
				result();
				v.push_back(b);
				b.clear();
			}
		}
		else Try(i+1);
	}
}
int main()
{
	cin>>n>>k;
	Try(0);
	cout<<dem<<endl;
	for(int i=0;i<v.size();i++){
		for(int j=0;j<v[i].size();j++) cout<<v[i][j];
		cout<<endl;
	}
}
