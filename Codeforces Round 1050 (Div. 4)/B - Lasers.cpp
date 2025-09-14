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



inline void solve(){
    
   
   int n,m,x,y;
   
   cin>>n>>m>>x>>y;
   
   vl a(n);
   vl b(m);
   
   for(auto &k:a)cin>>k;
   for(auto &k:b)cin>>k;
   

   
   
   
   sort(all(a));
   sort(all(b));
   

   
   int ans=0;
   
   for(int i=0;i<n;i++){
     
      if(a[i]>=y)break;
      ans++;
   }
   
   
   for(int i=0;i<m;i++){
     
      if(b[i]>=x)break;
      ans++;
   }
   
   cout<<ans<<endl;
   
  
   
   

} 

// tc :
// sc :

int32_t main() {
    fastIO;
    
    int t; cin>>t;
    while(t--)solve();

    return 0;
}
