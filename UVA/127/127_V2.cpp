// Problem: 127 - "Accordian" Patience
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=63
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
//http://domen111.github.io/UVa-Easy-Viewer/?127
#include <bits/stdc++.h>
using namespace std;
struct card{
	char s;
	char r;
}cards[200][200];
int Index[200];

int main() {
	ios::sync_with_stdio(0); 
	cin.tie(0);
	int left;
	int left3;
	
	for(int i=0;i<52;i++){
		cin>>cards[0][i].r>>cards[0][i].s;
		Index[i]++;
	}	
	/*
	for(int i=0;i<52;i++){
		cout<<cards[0][i].r<<cards[0][i].s<<' ';
	}
	cout<<'\n';
	for(int i=0;i<52;i++){
		cout<<Index[i]<<' ';
	}
	*/
	//Input
	while(true){
		for(int i=0;i<n;i++){
			left3x=i-3
			while(Index[left3]==0)left3;
			if(cards[Index[left3]-1][left3].s==cards[Index[i]-1][i].s){
				cards[Index[left3]][left3]=cards[Index[i]-1][i]
				Index[i]--;
				continue;
			}
			
			left=i-1;
			while(Index[left]==0)left--;
			if(cards[Index[left3]-1][left3].r==cards[Index[i]-1][i].r){
				cards[Index[left3]][left3]=cards[Index[i]-1][i]
				Index[i]--;
				continue;
			}
			//comp
		}
		break;
		//not done
	}
}    
