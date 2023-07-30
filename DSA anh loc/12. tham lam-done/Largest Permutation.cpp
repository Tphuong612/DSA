#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n, k;
	cin>>n>>k;
	vector <int> v;
	int a[n+5], pos[n+5];// mang pos luu vi tri xuat hien
	for(int i=1;i<=n;i++){
		cin>>a[i];
		pos[a[i]]=i;// vi tri cua phan tu co gia tri a[i] o vi tri i; 
		if(a[i]!=n-i+1){// ktr xem phan tu da dung dung vi tri chua
			v.push_back(a[i]);
		}
	}
	sort(v.begin(), v.end(), greater<int>());
	for(int i=0;i<v.size();i++){
		if(k==0) break;
		int x=v[i], pos1=pos[x];
		int y=a[n-x+1], pos2=pos[y];// n-x+1: vi tri dung vi tri cua gia tri x
		if(pos1!=pos2){
			swap(a[pos1], a[pos2]);
			pos[x]=pos2;
			pos[y]=pos1;
			--k;
		}
	}
	for(int i=1;i<=n;i++) cout<<a[i]<<" ";
}
