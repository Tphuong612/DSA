#include <bits/stdc++.h>
using namespace std;
struct job{
	int id, deadline, profit;
};
bool cmp(job a, job b){
	return a.profit>b.profit;
}
int main()
{
	int n;
	cin>>n;
	vector<job> v;
	for(int i=0;i<n;i++){
		int x, y, z;
		cin>>x>>y>>z;
		v.push_back({x, y, z});
	}
	sort(v.begin(), v.end(), cmp);// sap xep theo loi nhuan giam dan
	
	bool used[1005];
	memset(used, false, sizeof(used));
	long long sum=0;
	for(int i=0;i<n;i++){
		for(int j=v[i].deadline-1;j>=0;j--){// lua chon moc thoi gian de hoan thanh cong viec
			if(!used[j]){
				sum+=v[i].profit;
				used[j]=true;
				break;
			}
		}
	}
	cout<<sum;
}
