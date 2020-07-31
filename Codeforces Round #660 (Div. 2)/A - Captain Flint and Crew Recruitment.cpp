#include<bits/stdc++.h>
#define MOD 1000000007
#define ll long long
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","r",stdout);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n<=30){
			cout<<"NO\n";
			continue;
		}
		if(n%2==0){
			if(n-30!=6 && n-30!=10 && n-30!=14)
				cout<<"YES\n6 10 14 "<<n-30<<"\n";
			else
				cout<<"YES\n6 10 15 "<<n-31<<"\n";
			
		}	
		else{
			cout<<"YES\n6 10 14 "<<n-30<<"\n";
		}
	}
}
