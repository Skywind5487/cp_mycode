#include<bits/stdc++.h>
using namespace std;
//Q:次方加總
//加入快速冪與建表



int sum[9000];

int Ptemp[9000][9000];
int PBtemp[9000][9000];//Pow bool temp
int Pow(int base,int n){
	if(PBtemp[base][n])return Ptemp[base][n];
	if(n%2==1){
		if(PBtemp[base][n]!=1){
			PBtemp[base][n]=1;
			Ptemp[base][n]=Pow(base,n-1)*base;			
		}
		return Ptemp[base][n];
	}
	if(n==0){
		return 1;
	}
	PBtemp[base][n]=1;
	Ptemp[base][n]=Pow(base,n/2)*Pow(base,n/2);
	return Ptemp[base][n];
}

//base^0=1
//base^i=base^(i/2)*base
//base^i=(base^(i/2))^2
int Sum(int base,int n){
	
	for(int i=1;i<=n;i++){
		sum[i]=sum[i-1]+Pow(base,i);
	}
	return sum[n];
}
//dp[0]=0
//dp[i]=dp[i-1]+base^i
int main(){
	int a,b;
	sum[0]=1;
	cin>>a>>b;
	cout<<Sum(a,b)<<"\n";
		
}