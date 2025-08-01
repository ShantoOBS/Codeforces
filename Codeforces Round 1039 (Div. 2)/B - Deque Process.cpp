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
 
  
   int n ; cin>>n; 
   vl v(n); in(v);
   
   deque<int>dq(all(v));
   
   
   string ans;
   
   int cnt=0;
   
   while(!dq.empty()){
     
        int f=dq.front();
        int b=dq.back();
        
        
        if(cnt&1){
          
         if(f>b){
          dq.pop_back();
          ans+='R';
         }
         else {
           dq.pop_front();
           ans+='L';
         } 
          
        }
        else{
          
            if(f<b){
          dq.pop_back();
          ans+='R';
         }
         else {
           dq.pop_front();
           ans+='L';
         } 
          
          
          
        }
        
        cnt++;
        
          
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
