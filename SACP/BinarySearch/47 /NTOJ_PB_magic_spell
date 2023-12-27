//https://toj.tfcis.org/oj/pro/47/


#include <bits/stdc++.h>
using namespace std;
/*
sort
l
r
arr



*/


/*
void bis(int l,int r){
	
}
*/

int arr[200000000];
int main()
{
	int l=0,r,k,n,mid,Max,Min,pos=-1;
	cin>>k;
	r=k-1;
	int i;
	for(i=0;i<k;i++){
		cin>>arr[i];
	}
	sort(arr+0,arr+k);
	/*for(i=0;i<k;i++){
		cout<<arr[i]<<' ';
	}*/
//	cout<<'\n';
	//bi search
	int cnt;
	cin>>cnt;
	for(i=0;i<cnt;i++){
		cin>>n;
		l=0;//init pls
		r=k-1;
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
		//up code will right in max min include pos
		/*when max min not include pos and u need to output max and min
			if(mid==0)Min=-1,Max=1;
			else if (mid==k-1) Min=k-2 ,Max=-1
			else Min=mid-1 Max=mid+1
		*/
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
