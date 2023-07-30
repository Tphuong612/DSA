#include <bits/stdc++.h>
using namespace std;
int main()
{

	int n;
	cin>>n;
	vector<vector<int>> v;
	vector <int> a(n);
	vector <int> b;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++)
	{
		int key=a[i];
		int j=i-1;
		while(j>=0&&a[j]>key) // tim vi tri key tm dk nay, dung thi vi tri a[j] dc day ra sau, 
				//sau do chi so j dc giam di thanh chi so cua so lien trc de cho key vao vi tri dung
			{
				a[j+1]=a[j];
				j--;
			}
		a[j+1]=key;
		
		for(int q=0;q<=i;q++) b.push_back(a[q]);
		v.push_back(b);	
		b.clear();
	}
	
	for(int i=v.size()-1;i>=0;i--)
		{
			cout<<"Buoc "<<i<<": ";
			for(int j: v[i]) cout<<j<<" ";
			cout<<endl;
		}
}
			

