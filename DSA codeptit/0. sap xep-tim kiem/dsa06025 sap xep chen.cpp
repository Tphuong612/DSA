#include <bits/stdc++.h>// insertion sort
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n+5];
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
			cout<<"Buoc"<<" "<<i<<": ";
			for(int k=0;k<=i;k++) cout<<a[k]<<" ";
			cout<<endl;
		}
}

