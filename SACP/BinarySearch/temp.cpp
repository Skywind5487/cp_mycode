

#include <bits/stdc++.h>
using namespace std;


int arr[200000000];
int main()
{
	int l=0,r,k,n,mid,Max,Min,pos=-1;
	cin>>k;
	r=k-1;
	int i;
	cin>>n;
	int imax=0,sum=0;
	for(i=0;i<k;i++){
		cin>>idis[i];
		imax=max(imax,idis[i]);
		sum+=idis[i];
	}
	
	
	
	for(i=0;i<cnt;i++){
		cin>>n;
		l=imax;//init pls
		r=sum;
		pos=-1;
		Max=-1;
		Min=-1;
		while(l<=r){//l>r stop so l<=r keep going
			
			mid=(l+r)/2;
			if(arr[mid]==n){
				pos=mid;
				Max=pos;
				Min=pos;
				break;//remember this
			}
			if(arr[mid]<n){
				Min=mid;
				//cout<<Min<<"Min\n";
				l=mid+1;//remember to remove the middle
			}
			else{//use else not another if
				Max=mid;
				//cout<<Max<<"Max\n";
				r=mid-1;//also
			}
		}
		if(pos>=0){
			cout<<arr[pos];
		}
		else {
			if(Min==-1){
				cout<<"no";
			}
			else cout<<arr[Min];
			cout<<' ';
			if(Max==-1){
				cout<<"no";
			}
			else cout<<arr[Max];
		}
		cout<<"\n";
	}
	
}
