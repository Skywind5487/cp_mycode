/*https://zerojudge.tw/ShowProblem?problemid=m372*/

#include<bits/stdc++.h>
using namespace std;
using ll = long long int ;

int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
//r d l u


struct node {
	int x,y;
	int dir;
	
};

bool right(char ch) {
    return ch=='H' || ch=='L' || ch=='F' || ch=='X';
}
bool left(char ch) {
    return ch=='H' || ch=='J' || ch=='7' || ch=='X';
}
bool down(char ch) {
    return ch=='I' || ch=='7' || ch=='F' || ch=='X';
}
bool up(char ch) {
    return ch=='I' || ch=='L' || ch=='J' || ch=='X';
}





const int LEN=1024;
bool used[LEN][LEN];
node qq[1048576];
string board[LEN];

int bfs(int sx,int sy,int n,int m){

	int i,j,Max=-200,ans;
	qq[0].x=sx;
	qq[0].y=sy;
	qq[0].dir=0;
	used[sx][sy]=true;
	
	for(i=0,j=1;j>i;i++){
		node cur,nxt;
		cur=qq[i];
		int k;
		for(k=0;k<4;k++){
			nxt=cur;
			nxt.x+=dx[k];
			nxt.y+=dy[k];
			nxt.dir++;
			if(nxt.x>=0 && nxt.x<n-1
			&& nxt.y>=0 && nxt.y<m-1) {
				if(!used[nxt.x][nxt.y]
				&& board[nxt.x][nxt.y]!='0'){
					if(
					(k==0 && right(board[cur.x][cur.y]) &&  left(board[nxt.x][nxt.y]))||
					(k==1 &&  down(board[cur.x][cur.y]) &&    up(board[nxt.x][nxt.y]))||
					(k==2 &&  left(board[cur.x][cur.y]) && right(board[nxt.x][nxt.y]))||
					(k==3 &&    up(board[cur.x][cur.y]) &&  down(board[nxt.x][nxt.y]))		
					){
						//cout<<nxt.x<<" "<<nxt.y<<"\n";
						used[nxt.x][nxt.y]=true;
						qq[j]=nxt;
						j++;
						//Max=max(Max,nxt.dir);
					}
					
				}
			}
		}		
	}
	return j;	
}






int main(){
	memset(used,0,sizeof(used));
	int n,m,i,j,ans=0;
	cin>>n>>m;
	for(i=0;i<n;i++)cin>>board[i];
	for(i=0;i<n;i++)for(j=0;j<m;j++){
		if(board[i][j]!='0' && !used[i][j]){
			ans=max(ans,bfs(i,j,n,m));
		}
	}
	cout<<ans<<"\n";
	
	
	
	
}


/*
zerojudge上的測資:
#18: 5% WA (line:1)
您的答案為: 991
正確答案為: 249982
#19: 5% WA (line:1)
您的答案為: 999
正確答案為: 125250
	
	
*/
