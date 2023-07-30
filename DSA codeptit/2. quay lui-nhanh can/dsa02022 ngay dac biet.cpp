#include <bits/stdc++.h>
using namespace std;
int a[10];
vector <string> v1, v2;
int check1()// ktr ngay thang
{
	if(a[0]==0&&a[1]==0||a[2]==1||a[3]==0) return 0;
	return 1;
}
int check2()// kiem tra nam
{
	if(a[0]==1) return 1;
	return 0;
}
void result()// tao ngay thang
{
	string s="";
	for(int i=0;i<4;i++) 
		if(a[i]==1) s+='2';
		else s+='0';
//	for(int i=3;i>=0;i--) s+=s[i];
	s.insert(2,"/");
	s.insert(5,"/");
	v1.push_back(s);
}
void nam()// tao nam
{
	string s="";
	for(int i=0;i<4;i++) 
		if(a[i]==1) s+='2';
		else s+='0';
	v2.push_back(s);
}
void Try(int i)
{
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==3){
			if(check1()) result();
			if(check2()) nam();
		}
		else Try(i+1);
	}
}
int main()
{
	Try(0);
	for(int i=0;i<v1.size();i++)
		for(int j=0;j<v2.size();j++)
			cout<<v1[i]+v2[j]<<endl;
			
}
