#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
 
void solve(){
 
}
int main(){
	int t;
	cin>>t;
	int n,m;
	char arr[100][100];
	while(t--){
		cin>>n>>m;
		int ans=0;
		for(int i=0;i<n;i++){
			string s;
			cin>>s;
			for(int j=0;j<m;j++){
				arr[i][j]=s[j];
			}
		}
		for(int j=0;j<m-1;j++){
			if(arr[n-1][j]=='D')
				ans++;
		}
		for(int i=0;i<n-1;i++){
			if(arr[i][m-1]=='R')
				ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
