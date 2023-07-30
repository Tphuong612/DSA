//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n;
//    cin>>n;
//    int a[n+5];
//    map <int, int> m;
//    for(int i=0;i<n;i++){
//    	cin>>a[i];
//    	m[a[i]]++;
//	}
//	for(auto i:m)
//	{
//		cout<<i.first<<" "<<i.second<<endl;
//	}
//}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+5];
	int b[100005]={0};
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[a[i]]++;
	}
	for(int i=0;i<n;i++){
		if(b[a[i]]!=0){
			cout<<a[i]<<" "<<b[a[i]]<<endl;
			b[a[i]]=0;
		}	
	}
}
