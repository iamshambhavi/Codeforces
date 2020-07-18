#include<bits/stdc++.h>
#define MOD 1000000007
#define long long ll
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","r",stdout);
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int sum=0;
	for(int i=0;i<(n+1)/2;i++){
		sum+=arr[i*2];
	}
	int ans=sum;
	for(int i=0;i<n-1;i++){
		sum-=arr[(2*i)%n];
		sum+=arr[(2*(i+((n+1)/2)))%n];
		ans=max(ans,sum);
	}
	cout<<ans;
}

