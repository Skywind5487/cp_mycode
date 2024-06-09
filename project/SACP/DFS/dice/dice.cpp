#include<bits/stdc++.h>
using namespace std;




int ans = 0;
int a,b,c,k;

void dfs(int depth, int total){
	if(depth == a){
		if(total + c >= k)ans++;
		return;
	}
	for(int i=0 ; i < b ; i++){
		dfs(depth + 1 , total + i +1);
	}
}


int main(){
	while(cin>> a >> b >> c >> k){
		
		dfs(0,0);
		cout << ans << "\n";
	}
}