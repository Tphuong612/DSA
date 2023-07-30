#include <bits/stdc++.h>
using namespace std;
int main()
{
	map <int, int> m;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		m[x]++;
	}
	int car=0;
	car+=m[4];
	int conlai=0;
	
	car+=m[2]/2;
	if(m[2]%2==1) conlai=2;
	
	car+=min(m[3], m[1]);
	if(min(m[3], m[1])==m[3]) conlai+=m[1]-m[3];
	else car+=m[3]-m[1];
	
	car+=ceil((float)conlai/4);
	cout<<car;
	
	
}
