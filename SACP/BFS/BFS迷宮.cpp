#include<bits/stdc++.h>
using namespace std;
//int sx,xy,ex,ey;
int n,m;
const long long int len =1e5;
string board[1024];
bool used[1024][1024];

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};


struct node{
	int x,y,dis;
};

node qq[1048576];


int bfs(int _sx,int _sy,int _ex,int _ey,int n,int m){
	int i,j;
	
	qq[0].x=_sx;
	qq[0].y=_sy;
	qq[0].dis=0;
	
	used[_sx][_sy]=true;
	
	node cur,nxt;
	memset(used,0,sizeof(used));
	for(i=0,j=1;i<j/*queue裡還有東西*/;i++){
		cur=qq[i];
		if(cur.x == _ex && cur.y == _ey){
			return cur.dis;

		}
		int k;
		for(k=0;k<4;k++){
			nxt=cur;
			nxt.x+=dx[k];
			nxt.y+=dy[k];
			nxt.dis++;//忘了 哭喔
			if(nxt.x >= 0 && nxt.x <n
			&& nxt.y >= 0 && nxt.y <m){
				if(board[nxt.x][nxt.y]!='#' && !used[nxt.x][nxt.y]){
					used[nxt.x][nxt.y]=true;
					qq[j] = nxt;
					j++;
				}
			}
			
		}
	}
	return -1;
}


int main(){
	cin>>n>>m;//n直m橫
	int i,j;
	int Sx=-1,Sy=-1,Ex=-1,Ey=-1;
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>board[i][j];
			if(board[i][j]=='S'){
				Sx=i;
				Sy=j;
			}
			else if(board[i][j]=='E'){
				Ex=i;
				Ey=j;
			}
			
		}
	}
	if(Sx==-1||Ex==-1){
		cout<<-1;
		
	}
	else cout<<bfs(Sx,Sy,Ex,Ey,n,m);
	
	
	
}
