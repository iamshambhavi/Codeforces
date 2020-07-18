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
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int ans=0;
		vector<int>v;
		for(int i=0;i<n;i++){
			if(arr[i]!=(i+1)){
				v.push_back(arr[i]);
				ans++;
			}
			
		}
		int mini=INT_MAX,maxi=INT_MIN,sum=0;
		for(int i=0;i<v.size();i++){
			mini=min(mini,v[i]);
			maxi=max(maxi,v[i]);
			sum+=arr[v[i]-1];
		}
		int total=((maxi*(maxi+1))/2)-(((mini-1)*mini)/2);
		if(ans){
			if(total==sum)
			cout<<"1"<<endl;
			else
			cout<<"2"<<endl;
		}
		else{
			cout<<"0"<<endl;
		}
	}
}

