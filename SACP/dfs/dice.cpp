/*
輸入四個整數 a、b、c、k，
表示擲 a 顆 b 面骰（每面點數從 1 到 b），
然後將所有骰子的點數總和加上 c。
請問，有多少種情形會使得這個總和大於等於 k？
*/
#include<bits/stdc++.h>
using namespace std;

int a, b, c, k, ans;

void dfs(int depth, int total){
	if (depth >= c){
		if (total + c > k){
			ans++;
		}
		return;
	}
	int i;
	for (i=1; i<=b; i++){
		dfs(depth + 1, total + b);
	}
}

int main(){
	//cin >> a >> b >> c >> k;
	ans = 0;
	dfs(0, 0);
	cout << ans << "\n";
}
