#include<bits/stdc++.h>
using namespace std;
 
int red[205];
int blue[205];
int green[205];
int dp[205][205][205];
int abcd(int i,int j,int k,int r,int g,int b){
	int count1=(i==r);
	count1+=(j==g);
	count1+=(k==b);
	if(count1>=2)
		return 0;
	if(dp[i][j][k]!=-1)
		return dp[i][j][k];
	int ans=0;
	if(i<r && j<g)
		ans=max(ans,red[i]*green[j]+abcd(i+1,j+1,k,r,g,b));
	if(i<r && k<b)
		ans=max(ans,red[i]*blue[k]+abcd(i+1,j,k+1,r,g,b));
	if(j<g && k<b)
		ans=max(ans,blue[k]*green[j]+abcd(i,j+1,k+1,r,g,b));
	dp[i][j][k]=ans;
	return ans;
}
int main(){
	memset(dp,-1,sizeof(dp));
	int r,g,b;
	cin>>r>>g>>b;
	for(int i=0;i<r;i++){
		cin>>red[i];
	} 
	for(int i=0;i<g;i++){
		 cin>>green[i];	
	}
	for(int i=0;i<b;i++){
		 cin>>blue[i];
	}
	sort(red,red+r,greater<int>());
	sort(blue,blue+b,greater<int>());
	sort(green,green+g,greater<int>());
	cout<<abcd(0,0,0,r,g,b)<<"\n";
}
