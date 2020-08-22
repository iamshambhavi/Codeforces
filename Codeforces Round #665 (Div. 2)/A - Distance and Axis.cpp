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
		int n,k;
		cin>>n>>k;
		if(n==k)
		cout<<0<<endl;
		else if(k>n)
		cout<<k-n<<endl;
		else{
			if(k%2==0&&n%2!=0)
			cout<<1<<endl;
			else if(k%2!=0&&n%2==0)
			cout<<1<<endl;
			else
			cout<<0<<endl;
		}
	}
}
