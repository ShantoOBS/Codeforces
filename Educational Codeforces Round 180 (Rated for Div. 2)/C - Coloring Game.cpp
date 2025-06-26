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
    
   
     int n; cin>>n;
     
     vl a(n); in(a);
     
     
     sort(all(a));
     
     
     int ans=0;
     
     for(int i=0;i<n-2;i++){
       
       
          for(int j=i+1;j<n-1;j++){
            
        auto it = lower_bound(a.begin()+j+1, a.end(), a[i]+a[j]);
				int end = it - (a.begin()+j+1);
				if(end == 0) continue;
				it = upper_bound(a.begin()+j+1, a.begin()+j+end+1, a[n-1]-a[i]-a[j]);
				ans += (a.begin()+j+end+1) - it;
              
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
