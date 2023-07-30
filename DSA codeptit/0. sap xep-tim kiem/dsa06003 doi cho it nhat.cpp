#include <bits/stdc++.h>// doi cho it nhat su dung thuat toan selection sort
using namespace std;
void test()
{
	int n;
	cin>>n;
	int a[n+5];
	for(int i=0;i<n;i++) cin>>a[i];
	int dem=0;
	for(int i=0;i<n-1;i++){
		int min_idex=i;
		for(int j=i+1;j<n;j++)
			{
				if(a[i]>a[j]) min_idex=j;
			}
		if(min_idex!=i){
			dem++;
			swap(a[i], a[min_idex]);
		}	
	}
	cout<<dem<<endl;
//	for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
int main()
{
	int t=1;
	cin>>t;
	while(t--)
	{
		test();
	}
}
