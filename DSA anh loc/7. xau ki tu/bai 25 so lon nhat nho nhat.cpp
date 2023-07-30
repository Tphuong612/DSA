#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m,s;// m chu so, co tong la s
	cin>>m>>s;
	if(m==1&&s==0) cout<<"0"<<endl<<"0";
	else if(s==0||s>9*m) cout<<"NOT FOUND";
	else
	{
		vector <int> v;// v1 chua max, v2 chua min
		// tim max;
		int a[9]={9,8,7,6,5,4,3,2,1};
		int j=0;
		while(s<a[j]) j++;
		while(s-a[j]>0){
			v.push_back(a[j]);
			s-=a[j];
		}
		v.push_back(s);
		s=0;
		while (v.size()<m) v.push_back(0);

		string max="";
		for(auto i: v) max+=to_string(i);
		
		//tim min
		string min="";
		for(int i=v.size()-1;i>=0;i--) min+=to_string(v[i]);
	
		if(min[0]=='0'){
			min[0]='1';
			for(int i=1;i<min.size();i++){
				if(min[i]!='0'){
					min[i]=min[i]-1;
					break;
				}
			}
		}
		
		cout<<min<<endl;
		cout<<max;
	}
	
}
