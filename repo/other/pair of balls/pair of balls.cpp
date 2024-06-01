//https://hackmd.io/@sa072686/SJRXfW5Bs/%2F%40sa072686%2FAtCoder_abc216_d

/*
建表
讀入數據
維護數據頭 top 陣列
新增 tbl 儲存現有top
窮舉可消陣列
	如果本次cnt沒變多 就break
	tbl沒有 輸入
	如果tbl有 更新兩邊top 
	更新現在值
	重複偵測兩值是否相等


用count pair



*/


/*
ip : nowm
邊界檢查 return
if tbl
-1: 填入 return
其他
if self return
else
cnt ++
update 2 head

tpair(nowm)
tpair(otherm)





*/


#include<bits/stdc++.h>
using namespace std;
using LL = long long;
const LL N = 3 * 1e5;
vector<int> top;
vector<vector<int>> brd;
vector<int> tbl;
int cnt=0;

void tpair(int nowm){
	if(top[nowm] + 1 > brd[nowm].size()){
		//cout << "hi\n";
		return;
	} 
	
	int now = brd[nowm][top[nowm]];
	if(tbl[now] == -1){
		tbl[now] = nowm;
		return;
	}
	if(tbl[now] == nowm) return;
	
	cnt++;
	top[nowm]++;
	int otherm = tbl[now];
	top[otherm]++;
	
	tpair(nowm);
	tpair(otherm);
}


int main(){
	int n,m;
	cin >> n >> m;
	top.resize(m);
	brd.resize(m);
	for(int i=0 ; i<m; i++){
		int k;
		cin >> k;
		brd[i].resize(k);
		for(int j=0 ; j<k; j++){
			cin >> brd[i][j];
		}
		top[i] = 0;
	}
	
	//i = M = 桶
	//j = k = 個
	tbl.resize(n+1);
	
	for(int i=0; i<n+1;i++){
		tbl[i] = -1;
	}
	for(int i=0 ;i<m;i++){
		//if(tbl[brd[i][top[i]]] == -1)
		tpair(i);
	}
	
	if(cnt == n){
		cout << "Yes\n";
	}
	else cout <<"No\n";
}