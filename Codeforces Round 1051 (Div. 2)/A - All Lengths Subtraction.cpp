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
    
   
   int n; cin>>n;
   vl v(n); in(v);
   
   int mid=(n+1)/2;
   
   for(int i=1;i<n-1;i++){
     
       if(v[i]<v[i-1] && v[i]<v[i+1]){
         cout<<"NO"<<endl;return;
       }
   }
   
  
     cout<<"YES"<<endl;
   
   

} 

// tc :
// sc :

int32_t main() {
    fastIO;
    
    int t; cin>>t;
    while(t--)solve();

    return 0;
}
