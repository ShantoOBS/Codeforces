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
     
     
  int a,b, k; cin>>a>>b>>k;
  

   int val=__gcd(a,b);
   
   a/=val;
   b/=val;
   
   if(a<=k && b<=k){
     cout<<1<<endl;
     
   }
   else{
     cout<<2<<endl;
   }
  
  
    
   
    
   
}

// tc :
// sc :

int32_t main() {
    fastIO;
    
    int t; cin>>t;
    
    while(t--)solve();

    return 0;
}
