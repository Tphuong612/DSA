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
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector <job> v(n+1);
		for(int i=1;i<=n;i++){
//			int x, y, z;
//			cin>>x>>y>>z;
//			v.push_back({x, y, z});
			cin>>v[i].id>>v[i].deadline>>v[i].profit;
		}
		sort(v.begin()+1, v.begin()+n+1, cmp);// sap xep theo loi nhuan giam dan
		
		bool used[1005];
		memset(used, false, sizeof(used));
		long long sum=0, dem=0;
		for(int i=1;i<=n;i++){
			for(int j=v[i].deadline;j>=1;j--){// lua chon moc thoi gian de hoan thanh cong viec
				if(!used[j]){
					dem++;
					sum+=v[i].profit;
					used[j]=true;
					break;
				}
			}
		}
		cout<<dem<<" "<<sum<<endl;
	}
}
