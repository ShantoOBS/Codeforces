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
    
   
   int n,k; cin>>n>>k;
   
   vl a(n); in(a);
   
   vl b(k); in(b);
   
   sort(all(a));
   sort(b.rbegin(),b.rend());
   
   
   while(a.size() && b.size() && b.back()==1){
        a.pop_back();
        b.pop_back();
     
   }
   
   int ans=0;
   
   
   for(int i=b.size()-1;i>=0;i--){
     
          int num=b[i];
          int pre=0;
          
          if(num<=a.size()){
            
          while(a.size() && num--){
              
               ans+=a.back();
               pre=a.back();
               a.pop_back();
          }
          
          ans-=pre;
          
          }
   }
   
 
   
   for(auto u:a)ans+=u;
   
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
