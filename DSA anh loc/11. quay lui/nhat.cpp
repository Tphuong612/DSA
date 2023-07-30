#include<bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> cnt;
void ktao() {
	
	cnt.push_back(0);
	cnt.push_back(1);
	while (true)
	{
		ll x = cnt[cnt.size() - 1] + cnt[cnt.size() - 2];
		if (x > 1e18) break;
		cnt.push_back(x);
	}
	
}

int main() {
	ll n;
	cin >> n;
	set<ll> s;
	vector<ll> v;
	long long x; int flag = 0;
	ktao();
	for (int i = 0; i < n; i++) {
		ll a; cin >> a;
		v.push_back(a);
	}

	for (ll i = 0; i < n; i++) {
		auto it = lower_bound(cnt.begin(), cnt.end(), v[i]);
		if (it!=cnt.end() && *it == v[i] && s.count(v[i]) == 0) {
			flag = 1;
			cout << v[i] << " ";
			s.insert(v[i]);
		}
	}
	if (flag == 0) cout << "NONE";
}