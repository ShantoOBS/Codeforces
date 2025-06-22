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
  
  
    int n; cin>>n; 
    
      vl v(n);
        
        for(auto &k:v )cin>>k;
        
        vl pre_max;
        
        
        int maxi=0;
        
        for(auto u:v){
            maxi=max(maxi,u);
            pre_max.pb(maxi);
        }
        
        
        
      int sum=0;
      
      for(int i=n-1;i>=0;i--){
        
          cout<<pre_max[i]+sum<<" ";
          sum+=v[i];
      }
      
      cout<<endl;
      
      
        
        
      
      
	
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
