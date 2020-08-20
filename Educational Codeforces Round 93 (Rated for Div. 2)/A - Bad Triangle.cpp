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
		int A[n];
		for(int i=0;i<n;i++){
			cin>>A[i];
		}
		if(A[0]+A[1]<=A[n-1])
		cout<<1<<" "<<2<<" "<<n<<endl;
		else
		cout<<-1<<endl;
    } 
}
