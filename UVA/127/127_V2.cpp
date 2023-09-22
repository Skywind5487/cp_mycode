// Problem: 127 - "Accordian" Patience
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=63
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
struct card{
	char s;
	char r;
}cards[200][200];
int doswap;
int Index[200];
vector<int> remain;
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
	test*/
	//Input
	while(true){
		doswap=0;

		
		//1~2 comp
		for(int i=0;i<52;i++){
			if(Index[i]==0){continue;}
			if(i>2){
				left3=i-1;
				while(left3>=0&&Index[left3]==0)left3--;
				left3--;
				while(left3>=0&&Index[left3]==0)left3--;
				left3--;
				while(left3>=0&&Index[left3]==0)left3--;
				if(left3<0){continue;}
				if(cards[Index[left3]-1][left3].s==cards[Index[i]-1][i].s){
					cards[Index[left3]][left3]=cards[Index[i]-1][i];
					Index[i]--;
					Index[left3]++;
					doswap++;
					continue;
				}
				if(cards[Index[left3]-1][left3].r==cards[Index[i]-1][i].r){
					cards[Index[left3]][left3]=cards[Index[i]-1][i];
					Index[i]--;
					Index[left3]++;
					doswap++;
					continue;
				}
			}
			left=i-1;
			while(left>=0&&Index[left]==0)left--;
			if(left<0){continue;}
			if(cards[Index[left]-1][left].s==cards[Index[i]-1][i].s){
				cards[Index[left]][left]=cards[Index[i]-1][i];
				Index[i]--;
				Index[left]++;
				doswap++;
				continue;
			}
			if(cards[Index[left]-1][left].r==cards[Index[i]-1][i].r){
				cards[Index[left]][left]=cards[Index[i]-1][i];
				Index[i]--;
				Index[left]++;
				doswap++;
				continue;
			}
			//comp
		}
		if(doswap==0)break;
		
		//not done
	}
	
	//comp done
	
	for(int i=0;i<52;i++){
		if(Index[i]!=0){
			
			remain.push_back(i);
		}
	}
	/*
	for (auto &v : remain) {
        cout <<v<<":"<<Index[v] << " ";
    }
	*/
	for(int i=0;i<52;i++){
		if(Index[i]==0)continue;
		cout<<i<<": ";
		for(int j=0;j<Index[i];j++){
			cout<<cards[0][i].r<<cards[0][i].s<<' ';
		}
		cout<<'\n';
	}


	//cout <<1<<":"<<Index[1] << " ";
	//output
	
}    
