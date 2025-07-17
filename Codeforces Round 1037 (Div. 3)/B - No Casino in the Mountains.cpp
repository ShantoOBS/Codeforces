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
   
     int cnt=0;
     
     int i=0;
     
   while(i<n){
     
         int j=i;
         
          cnt=0;
         
         while(j<i+k && j<n && v[j]==0){
           j++;
           cnt++;
         }
         
         if(cnt==k)ans++;
         
        // cout<<j<<endl;
         i=j+1;
         
         while(i<n && v[i]==1)i++;
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
