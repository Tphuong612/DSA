#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int dem7=0, dem4=0;
		vector <int> v;
		int check=n;
		while(n>=4){
			if(n%7==0){
				for(int i=0;i<n/7;i++){
					dem7++;
					v.push_back(7);
				}
				n=0;
			}
			else{
					v.push_back(4);	
					dem4++;
					n=n-4;
			}
		
		}
	//	cout<<dem4<<" "<<dem7<<endl;
		if(dem4*4+dem7*7==check){
			for(auto x: v) cout<<x;
		}
		else cout<<"-1";
		cout<<endl;
	}
}
