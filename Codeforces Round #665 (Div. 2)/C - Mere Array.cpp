#include<bits/stdc++.h>
#define MOD 1000000007
#define int long long
using namespace std;
 
int32_t main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> arr(n);
		int small[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
			small[i]=arr[i];
		}
		sort(small,small+n);
		bool okay=true;
		for(int i=0;i<n && okay;i++){
			if(arr[i]==small[i])
				continue;
			if(__gcd(arr[i],small[0])!=small[0]){
				okay=false;
			}
		}
		if(okay)
			cout<<"YES\n";
		else{
			cout<<"NO\n";
		}
	}
	return 0;
}
