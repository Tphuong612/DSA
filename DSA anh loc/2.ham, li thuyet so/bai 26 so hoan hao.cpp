#include <bits/stdc++.h>
using namespace std;
int a[50];// dung de sang, chi toan gia tri 0,1
long long shh[50];// mang chua so hoan hao
void sang()
{
	
	for(int i=0;i<50;i++) a[i]=1;
	a[0]=a[1]=0;
	for(int i=2;i<50;i++)
	{
		if(a[i]){
			for(int j=i*i;j<50;j+=i) a[j]=0;
		}
	}
}
long long pow3(int a, int b)
{
	long long res=1;
	while(b){
		if(b%2==1) res*=a;
		b/=2;
		a*=a;
	}
	return res;
}
void tao(){
	sang();
	
	int j=0;
	for(int i=2;i<40;i++){
		if(a[i]){
			j++;
			shh[j]=pow3(2,i-1)*(pow3(2,i)-1);
		}
	}
}
int check(long long n)
{
	tao();
	for(int i=0;i<40;i++){
		if(n==shh[i]){
			return 1;
		}
	}
	return 0;
	
}
int main()
{
	long long n;
	cin>>n;
	check(n);
	if(check(n)) cout<<"YES";
	else cout<<"NO";
}
