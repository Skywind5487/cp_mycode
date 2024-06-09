// Problem: Restaurant Customers 餐廳顧客
// Contest: CSES - CSES Problem Set  CSES問題集
// URL: https://cses.fi/problemset/task/1619/
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)


/*
記錄點
入點
出點分開
sort
long long









*/


#include<bits/stdc++.h>
using namespace std;

const int N = 2e6+1e3;

struct Time{
	long long int time;
	int io;
}t[N];

bool comp(const Time &a , const Time &b){
	return a.time < b.time;
}
int main(){
	long long int n;
	cin >> n;
	//int j=0;
	n*=2;
//	cout << n;
	
	for(int i = 0 ; i< n; i++){
		cin >> t[i].time;
		if(i%2 == 0){
			t[i].io = 1 ;		
		}
		else t[i].io = -1 ;
	}
	
	sort(t,t+n,comp);
	
	int ans = -1e6;
	int temp = 0;
	
	for(int i = 0; i< n; i++){
		temp += t[i].io;
		if(temp > ans){
			ans = temp;
		}
	}
	cout << ans;
	
	
		
}