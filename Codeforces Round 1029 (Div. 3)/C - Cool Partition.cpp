#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll t,n,a,s;
map<ll,ll> l,r;
int main(){
	cin>>t;
	while(t--){
		cin>>n;s=0;
		l.clear(),r.clear();
		for(int i=1;i<=n;i++){
			cin>>a;
			r[a]=1;
			if(l.count(a))l.erase(a);
			if(l.size()==0)s++,l=r,r.clear();
		}cout<<s<<endl;
	}return 0; 
}
