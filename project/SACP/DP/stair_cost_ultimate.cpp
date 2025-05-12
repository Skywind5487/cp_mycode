#include<bits/stdc++.h>
using namespace std;

/*
fij = sum (f(i-k))  k is 1 2 3 !=j 


init:0






1 = 1
2 = 1
3 = 2





*/

//int ans = 0;


const int N = 1e3;
int dp[N][N];
bool used[N][N];


int stair(int i,int j){
	// now ,previous
	if(used[i][j]){
		return dp[i][j];
	}
	
	if(i == 0){
		dp[i][j] = 0;
	}
	else if(i == 1){
		dp[i][j] = 1;
	}
	else if(i == 2){
		dp[i][j] = 1;
	}
	else if(i == 3){
		dp[i][j] = 2;
	}
	else{
		dp[i][j] = 0;
		for(int k = 1 ;k <= 3; k++){
			if(k != j){
				dp[i][j] += stair(i-j,k);
			}	
		}
		used[i][j] = true;	
	}
	return dp[i][j];
}

int main(){
	int n;
	cin >> n;
	for(int k = 1 ;k <= 3; k++){
		stair(n,k);
	}
	int ans;
	ans = max(max(dp[n][1],dp[n][2]),dp[n][3]);
	cout << ans;
	return 0;
}