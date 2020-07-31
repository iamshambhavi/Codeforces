
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
	while(t--){
		int n;
		cin>>n;
	    int mini=n/4;
	    if(n%4!=0)
		mini++;
	    for(int i=0;i<(n-mini);i++)
			cout<<"9";
		for(int i=0;i<mini;i++)
			cout<<"8";
		cout<<endl;
	}
}
