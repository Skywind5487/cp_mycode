#include<bits/stdc++.h>
using namespace std;
/*
Cn取m
*/



int n, m;
int res[128];

// 第 depth 層，最小選項為 start
void dfs(int depth, int start)
{
    int i;
    if (depth == m)
    {
    	cout << res[0];
    	for (i=1; i<m; i++)
    	{
    		cout << " " << res[i];
    	}
    	cout << "\n";
        return;
    }
    for (i=start; i<=n; i++)
    {
        // 記錄第 depth 層的選擇
    	res[depth] = i;
        dfs(depth+1, i+1);
    }
}


int bio(int n, int m){
	int i;
	int numer, denomi;
	numer = 1;
	denomi = 1;
	for(i=n;i>(n-m);i--){
		numer *= i;
	}
	for(i=1;i<=m;i++){
		denomi *=i	;	
	}
	return numer / denomi;
	
}

int main(){
	cin >> n >> m;
	dfs(0, 1);
}