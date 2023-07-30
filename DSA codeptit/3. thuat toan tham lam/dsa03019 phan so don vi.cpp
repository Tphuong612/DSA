#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main() {
	int t;
	cin>>t;
	while(t--){
		ll p,q;
	    cin >> p >> q;
		ll z = 0;
		while(true){
			if(q % p == 0){
				cout << "1/" << q/p << endl;
				break;
			}
			z = q/p + 1;
			cout << "1/" << z << " + ";
			p = z*p - q;
			q*= z;	
		}
		cout<<endl;
	}
}