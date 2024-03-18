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

int arr[200000];
int main()
{
	int l=0,r,k,n,mid;
	cin>>k>>n;
	r=k-1;
	int i;
	for(i=0;i<k;i++){
		cin>>arr[i];
	}
	sort(arr+0,arr+k);
	for(i=0;i<k;i++){
		cout<<arr[i]<<' ';
	}
	cout<<'\n';
	//bi search
	while(l<=r){//l>r stop so l<=r keep going
		mid=(l+r)/2;
		if(arr[mid]==n){
			cout<<mid<<"\n";
			break;
		}
		if(arr[mid]<n){
			l=mid+1;//remember to remove the middle
		}
		else{//use else not another if
			r=mid-1;//also
		}
	}
	//bi search end
	cout<<"end\n";
}
