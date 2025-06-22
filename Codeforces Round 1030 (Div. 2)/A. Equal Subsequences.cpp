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
    
  
    
   int n,k ; cin>>n>>k;
   
 
   if(n==k){
     
      for(int i=0;i<n;i++)cout<<'1';
      
      cout<<endl;
      
      return;
      
   }
   
   
   string ans(n,'0');
   
   for(int i=0;i<k;i++)ans[i]='1';
   
   
   

   
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
