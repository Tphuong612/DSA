#include <bits/stdc++.h>// trong truong hop chi goi la tim phan tu

using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n1,n2,n3;
		cin>>n1>>n2>>n3;
		long long a[n1];
		set <long long> giao;
		for(int i=0;i<n1;i++) cin>>a[i];
		
		set <long long> s2,s3;
		for(int i=0;i<n2;i++){
			long long x;
			cin>>x;
			s2.insert(x);//lua cac gia tri cua mang b
		}
		for(int i=0;i<n3;i++){
			long long x;
			cin>>x;
			s3.insert(x);//lua cac gia tri cua mang c
		}
		
		for(int i=0;i<n1;i++){
			if(s2.count(a[i])&&s3.count(a[i])) giao.insert(a[i]);
		}
		
		if(giao.size()==0) cout<<"-1";
		else{
			for(long long i: giao) cout<<i<<" ";
		}
		cout<<endl;
	}
}
