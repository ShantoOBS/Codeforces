#include <bits/stdc++.h>
using namespace std;

#define fastIO                                                                 \
    ios::sync_with_stdio(false);                                               \
    cin.tie(NULL);                                                             \
    cout.tie(NULL);                                                            \
    cout.precision(numeric_limits<double>::max_digits10);

#define int long long
#define all(v) v.begin(),v.end()
#define vl vector<int>
#define pb emplace_back

const int mod=1e9+7;

void print(vector<int>&v){for(auto u:v)cout<<u<<" "; cout<<endl;}


void solve() {
  
  
   int a,b,c; cin>>a>>b>>c;
   
   if((a+b+c)%3){
     cout<<"NO"<<endl;return;
   }
   
   int need=(a+b+c)/3;
   
   c-=need;
   
   b-=need;
   
   a-=need;
   
 //  cout<<a<<" "<<b<<" "<<c<<endl;
   
   if(abs(a)+abs(b)==abs(c)){
        cout<<"YES"<<endl;
   }
   else {
     cout<<"NO"<<endl;
   }
         
	
}

// tc : 
// sc : 

int32_t main() {
    fastIO;

    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
