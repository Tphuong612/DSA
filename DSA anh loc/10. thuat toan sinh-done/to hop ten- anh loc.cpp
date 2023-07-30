#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int n, k, X[100], final = 0;
string a[100];

void ktao(){
	for(int i = 1; i <= k; i++){
		X[i] = i;
	}
}

void sinh(){
	//Bắt đầu từ bit cuối kỳ 
	int i = k;
	//Đi tìm bit đầu tiên tính từ bên phải mà chưa đạt giá trị max : n - k + i
	while(i >= 1 && X[i] == n - k + i){
		--i;
	}
	if(i == 0){
		final = 1;
	}
	else{
		++X[i];
		// i + 1 => k
		for(int j = i + 1; j <= k; j++){
			X[j] = X[j - 1] + 1;
		}
	}
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	ktao();
	while(!final){
		for(int i = 1; i <= k; i++){
			cout << a[X[i]] << ' ';
		}
		cout << endl;
		sinh();
	}
}