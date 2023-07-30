#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a[1005][1005], x[1005];// ma tran ke a, x luu cau hinh
bool used[1005];// su dung cho dinh
int n, u;// n dinh, bat dau tu dinh u
void nhap(){
	cin>>n>>u;// n dinh, bat dau dinh u
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin>>a[i][j];
		}
	}
	memset(used, false, sizeof used);	
}

void hamilton(int k){// k dung de kiem tra so dinh
	for(int i=1; i<=n; i++){
		if(a[x[k-1]][i]){// duyet cac dinh ke vs dinh goc x[1]=u ban dau
			if(k==n+1&&i==u)// so dinh k=n+1, diem i quay lai dinh bat dau k, ghi nhan ket qua
				{
					for(int i=1; i<=n; i++) cout<<x[i]<<" ";
					cout<<endl;
				}
			else if(used[i]==false){
				x[k]=i;
				used[i]=true;
				hamilton(k+1);// de quy
				used[i]=false;// bc back-track
			}
		}
	}
}
int main()
{
	nhap();
	x[1]=u;// dinh dau tien cua chu trinh hamilton
	used[u]=true;
	hamilton(2);// xay dung cac dinh con lai nen moi bat dau tai vi tri k
}
/*
5
1
0 1 0 1 0
1 0 1 0 1
0 1 0 1 1
1 0 1 0 1
0 1 1 1 0
*/