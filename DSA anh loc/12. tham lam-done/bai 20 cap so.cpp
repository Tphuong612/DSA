#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int chan=0, le=0;
	vector <int> v1, v2;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		if(x%2==1){
			le++;
			v1.push_back(x);
		}
		else{
			v2.push_back(x);
		}
	}
	if(chan%2==0&&le%2==0) cout<<"YES";
	else{
		sort(v1.begin(), v1.end());
		sort(v2.begin(), v2.end());
		int check=0;
		for(int i=0;i<v1.size();i++){
			if(binary_search(v2.begin(), v2.end(), v1[i]-1)||binary_search(v2.begin(), v2.end(), v1[i]+1)){
				cout<<"YES";
				check=1;
				break;
			}
		}
		if(check==0) cout<<"NO";
	}
	
}
