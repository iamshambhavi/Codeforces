#include<bits/stdc++.h>
#define MOD 1000000007
#define long long ll
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","r",stdout);
	int t;
	cin>>t;
	bool flag=false;
	while(t--){
		int n;
		cin>>n;
		if(n%2==0){
			cout<<n/2<<" "<<n/2<<endl;
		}	
		else{
			for(int i=2;i*i<=n;i++){
				if(n%i==0){
					cout<<(n/i)<" "<<n-(n/i)<<endl;
					flag=true;
				}
			}
			if(!flag)
			cout<<1<<" "<<n-1<<endl;
		}
		
	}
}

