#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
long long d[1000005];
long long p[1000005];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	p[0]=1;
	for(int i=1;i<=1000002;i++)
		p[i]=(p[i-1]*i)%MOD;
		
	d[3]=2;
	for(int i=4;i<=1000002;i++){
		int s=(p[i]-((2*p[i-1])%MOD)+MOD);
		s=s%MOD;
		d[i]=(s+d[i-1]+d[i-1]);
		d[i]=d[i]%MOD;
	}
	cin>>n;
	cout<<d[n]<<"\n";
	return 0;
}
