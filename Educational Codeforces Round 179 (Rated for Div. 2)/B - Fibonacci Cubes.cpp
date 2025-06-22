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


const int mx=2e5+12;

vector<int>v(mx,0);



void solve() {
    
   
      int n,m; cin>>n>>m;
      
      string ans;
      
   
      
      while(m--){
        
        int w,l,h; cin>>w>>l>>h;
        
        int need=v[n-1]+v[n];
        
    
        
        int maxi=max({w,l,h});
        int mini=min({w,l,h});
        
        if(need<=maxi && v[n]<=mini){
          ans+='1';
        }
        else ans+='0';
          
      }
      
      cout<<ans<<endl;
    
}

// tc :
// sc :

int32_t main() {
    fastIO;
    
      v[1]=1;
      v[2]=2;

      for(int i=3;i<=mx;i++)v[i]=v[i-1]+v[i-2];
      int t=1;
      cin>>t;
    
      
      while(t--)solve();

    return 0;
}
