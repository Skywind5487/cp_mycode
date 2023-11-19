#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ull= unsigned long long;
string an,sl,tl,ans,Nan;
int sarc[1000],tarc[1000],ssy,tsy,temp;
ll tooct(ll b,string s){
	ll Ans=0;
	for(int i=0;i<s.length();i++){
		Ans=Ans*b+s[i]-'0';
	}
	return Ans;
}
int main(){
	
	ll t=0;
	cin>>t;
	
	
	//cout<<ssy<<"ggg"<<tsy<<"wad\n";
	for(int i=1;i<=t;i++){
		cin>>an>>sl>>tl;
		ssy=sl.length();
		tsy=tl.length();
		//cout<<an<<" "<<sl<<" "<<tl<<" ip\n";
		for(int j=0;j<=ssy;j++){
			sarc[sl[j]]=j;	
		}
		for(int j=0;j<=tsy;j++){
			tarc[tl[j]]=j;	
		}
		for(int j=0;j<an.length();j++){
			Nan+='0'+sarc[an[j]];
			//cout<<j<<"=j\n";
		}
		//cout<<Nan<<" here\n";
		temp=tooct(ssy,Nan);
		//cout<<temp<<"\n";
		for(int i=0;temp>0;i++){
			ans+=tl[temp%tsy];
			temp/=tsy;
		}
		reverse(ans.begin(),ans.end());
		cout<<"Case #"<<i<<": "<<ans<<"\n";
		
		Nan.clear();
		ans.clear();
		

	}
}