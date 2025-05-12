// Problem: A - Frog 1
// Contest: AtCoder - Educational DP Contest
// URL: https://atcoder.jp/contests/dp/tasks/dp_a
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
/*

dp[i] = min(dp[i-1]+abs(h[i-1]-h[i]),dp[i-2]+abs(h[i-1]-h[i]))


*/
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 +1e2;

int h[N];
int dp[N];
bool used[N];
int stone(int n){
	if(used[n]){}
	else if(n == 0){
		dp[n] = 0;
	}
	else if(n == 1){
		dp[n] = abs(h[1]-h[0]);
	}
	else {
		dp[n] = min(stone(n-1)+abs(h[n]-h[n-1]),stone(n-2)+abs(h[n]-h[n-2]));
		
	}
	used[n] = true;
	return dp[n];
}

int main(){
	memset(used,false,sizeof(used));
	int n;
	cin >> n;
	for(int i=0; i<n;i++){
		cin >> h[i];
	}
	stone(n-1);
	cout << dp[n-1];
}