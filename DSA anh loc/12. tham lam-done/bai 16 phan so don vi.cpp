#include<bits/stdc++.h>
#include<vector>


using namespace std;

int main() {
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
}