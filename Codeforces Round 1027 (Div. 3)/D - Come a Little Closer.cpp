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

const int mod=1e9+7;



void solve() {
    
      int n; cin>>n;
      
      multiset<int>st1,st2;
      
      vl x,y;
      
      for(int i=0;i<n;i++){
        
          int a,b; cin>>a>>b;
          x.pb(a);
          y.pb(b);
          st1.insert(a);
          st2.insert(b);
      }
      
      
      if(n==1){
        cout<<1<<endl;
        return;
      }
      
      
      
      int ans=LLONG_MAX;
      
      for(int i=0;i<n;i++){
        
            int tx=x[i], ty=y[i];
            
            st1.erase(st1.find(tx));
            st2.erase(st2.find(ty));
            
            int rx=*st2.rbegin()-*st2.begin()+1;
            int ry=*st1.rbegin()-*st1.begin()+1;
            
             if(rx * ry > (n - 1)) {
              ans = min(ans, rx * ry);
             }
             else{
              ans = min(ans, min((rx + 1) * ry, rx * (1 + ry)));
             }
             
             st1.insert(tx);
             st2.insert(ty);
        
        
      }
      
      cout<<ans<<endl;
      
     // cout<<row[0]<<" "<<col[0]<<endl<<row.back()<<" "<<col.back()<<endl;

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
