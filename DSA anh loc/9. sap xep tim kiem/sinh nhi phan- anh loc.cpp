#include <bits/stdc++.h>
using namespace std;

using ll = long long;

//X[] = {10001};
int n, X[100], final = 0;

void ktao(){
	for(int i = 1; i <= n; i++){
		X[i] = 0;
	}
}

void sinh(){
	//Di tim bit 0 dau tien tinh tu ben phai
	int i = n;
	while(i >= 1 && X[i] == 1){
		X[i] = 0;
		--i;
	}
	if(i == 0){
		final = 1; // day la cau hinh cuoi cung
	}
	else{
		X[i] = 1;
	}
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	cin >> n;
	ktao();
	while(!final){
		for(int i = 1; i <= n; i++){
			cout << X[i];
		}
		cout << endl;
		sinh();
	}
}