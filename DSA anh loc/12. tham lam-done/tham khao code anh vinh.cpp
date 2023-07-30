// bai 8 sx cong viec
#include<bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; ++i)
#define FORD(i, a, b) for(int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define endl '\n'

struct Job{
    int id, deadline, profit;
};

bool cmp(Job a, Job b){
	return a.deadline > b.deadline;
}
int main(){
	int n; cin >> n;
	Job a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i].id >> a[i].deadline >> a[i].profit;
	}
	sort(a, a+n, cmp);
	int cur_day = a[0].deadline, i = 0;
	priority_queue<int> pq;
	ll res = 0;
	while(cur_day >= 1){
		while(i < n && a[i].deadline >= cur_day){
			pq.push(a[i].profit);
			i++;
		}
		if(pq.size()){
			res += pq.top();
			cout << cur_day << " " << pq.top() << endl;
			pq.pop();
		}
		cur_day--;
	}
	cout << res;
}
// so may man
#include<bits/stdc++.h>

using namespace std;

//37 
//d7 = 3 => 37 - 3 * 7 = 16 
int main(){
	int n; cin >> n;
	for(int d7 = n/7; d7 >= 0; d7--){
		int k = n - d7 * 7;
		if(k % 4 == 0){
			for(int j = 0; j < k/4; j++)
				cout << 4;
			for(int j = 0; j < d7; j++)
				cout << 7;
			return 0;
		}
	}
	cout << -1;
}