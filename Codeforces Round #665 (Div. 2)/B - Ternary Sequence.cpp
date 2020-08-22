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
		int a,b,c;
		int x,y,z;
		cin>>a>>b>>c>>x>>y>>z;
		int mini=min(c,y);
		c=c-mini;
		if(z<=c+a)
		cout<<mini*2<<endl;
		else{
			z=z-(c+a);
			int p=mini*2;
			p=p-(z*2);
			cout<<p<<endl;
		}
	}
}
