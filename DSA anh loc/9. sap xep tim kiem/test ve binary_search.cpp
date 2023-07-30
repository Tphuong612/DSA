#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[5]={0, 1, 9, 8, 5};
	set <int> s;
	
	for(int i=0;i<5;i++){
		s.insert(a[i]);
	}
//	sort(s.begin(), s.end());
	if (binary_search(s.begin(), s.end(), 5)) cout<<"YES";
	else cout<<"NO";
}
