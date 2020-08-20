#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
	string s;
	cin>>s;
	bool cha=1;
	int n=s.length();
	int al=0;
	while(true){
		int st=-1;
		int c=0;
		int maxi=0;
		for(int j=0;j<n;j++){
			if(s[j]=='0'){
				if(c>maxi){
					st=j-c;
					maxi=c;
				}
				c=0;
			}else{
				c++;
			}
		}
		if(c>maxi){
			st=n-c;
			maxi=c;
		}
		if(maxi==0)
			break;
		if(cha){
			al+=maxi;
		}
		for(int j=0;j<maxi;j++) s[st+j]='0';
		cha=cha^1;
	}
	cout<<al<<endl;
	}
	return 0;
}
