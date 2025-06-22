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
#define in(v) for(auto &k:v)cin>>k;


void solve() {
    
     int n,k; cin>>n>>k;
     
     vl v(n); in(v);
     
     
     int ans=0;
     
     for(auto u:v){
       
         ans+=__builtin_popcountll(u);
     }
     
     for(int i=0;i<=60;i++){
        
        int temp=(1ll<<i);
        
        for(auto u:v){
          
             if( !(u&temp) && temp<=k  ){
               ans++;
               k-=temp;
             }
        }
     }
     
     cout<<ans<<endl;
      
    
    
}

// tc :
// sc :

int32_t main() {
    fastIO;
      int t=1;
      cin>>t;
      
      while(t--)solve();

    return 0;
}
