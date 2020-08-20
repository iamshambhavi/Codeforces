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
		int arr[n+1];
		for(int i=1;i<=n;i++)
		arr[i]=i;
		for(int i=1;i<=n;i++)
		cout<<arr[i]<<" ";
		cout<<endl;
	}
}
