/*
### 爬樓梯問題
給 n 階樓梯，每次可跨一階或者兩階，只能往上爬不能往下，求有多少種不同的上樓梯方式？
#### 範例輸入
```
5
```
#### 範例輸出
```
8
```
#### 範例輸入
```
10
```
#### 範例輸出
```
89
```
*/
#include<bits/stdc++.h>
using namespace std;

int ip[2000000];
int sum[2000000];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>ip[i];
	}
	
	sum[0]=ip[0];
	sum[1]=ip[0]+ip[1];
	if(n<2){
		cout<<sum[n];
	}
	else{
		for(int i=1;i<n;i++){
			sum[i]=min(sum[i-1],sum[i-2])+ip[i];
		}
		cout<<sum[n-1];
	}
	
	
}
