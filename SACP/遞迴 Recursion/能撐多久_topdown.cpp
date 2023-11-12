/*輸入兩正整數 a、b，求 a 在除以幾次 b 之後會回到 0。*/

#include<bits/stdc++.h>
using namespace std;
//int dp[900];
int divi(int x,int y,int z){
	if(x==0){
		return z;
	}
	cout<<"now:"<<x/y<<"\n";
	return divi(x/y,y,z+1);
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<divi(a,b,0);
}