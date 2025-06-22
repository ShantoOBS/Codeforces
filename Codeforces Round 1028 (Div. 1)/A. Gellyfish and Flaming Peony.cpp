#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	vector<int>a(n+1);
	for(int i=1;i<=n;i++)cin>>a[i];
	int g=a[1];
	for(int i=2;i<=n;i++)g=__gcd(g,a[i]);
	int cnt=count(a.begin()+1,a.end(),g);
	if(cnt){
		cout<<n-cnt<<'\n';
		return;
	}
	vector<int>dp(5050,10000);
	for(int i=1;i<=n;i++)dp[a[i]]=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=5000;j++){
			int tg=__gcd(a[i],j);
			dp[tg]=min(dp[tg],dp[j]+1);
		}
	}
	cout<<dp[g]+n-1<<'\n';
}
int main(){
	int t;
	cin>>t;
	while(t--)solve();
}#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	vector<int>a(n+1);
	for(int i=1;i<=n;i++)cin>>a[i];
	int g=a[1];
	for(int i=2;i<=n;i++)g=__gcd(g,a[i]);
	int cnt=count(a.begin()+1,a.end(),g);
	if(cnt){
		cout<<n-cnt<<'\n';
		return;
	}
	vector<int>dp(5050,10000);
	for(int i=1;i<=n;i++)dp[a[i]]=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=5000;j++){
			int tg=__gcd(a[i],j);
			dp[tg]=min(dp[tg],dp[j]+1);
		}
	}
	cout<<dp[g]+n-1<<'\n';
}
int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
