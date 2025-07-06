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
    
   
    int n,j,k; cin>>n>>j>>k;
    
    vl v(n); in(v);
    
    int ele=v[j-1];
    
    sort(all(v));
    
    
    
   if(k==1 && ele<v[n-1])  {
     
     cout<<"NO"<<endl;
      
   }
   else{
     cout<<"YES"<<endl;
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
