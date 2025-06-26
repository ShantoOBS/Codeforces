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
     
     vl v(n); in(v);
     
     
     for(int i=1;i<n;i++){
       int temp=abs(v[i-1]-v[i]);
        if(temp>=0 && temp<=1 ){
          cout<<0<<endl;
          return ;
        }
     }
     
    
     
     for(int i=0;i<n;i++){
       
         int maxi_b=0,maxi=0;
     
         int mini_b=LLONG_MAX, mini=LLONG_MAX;
        
        if(i>=2){
          mini=min(v[i-2],v[i-1]);
          maxi=max(v[i-2],v[i-1]);
        }
        
         if(i+2<n){
          maxi_b=max(v[i+1],v[i+2]);
          mini_b=min(v[i+1],v[i+2]);
         }
         
          if(mini_b<= v[i] && v[i]<=maxi_b){
           cout<<1<<endl;
           return;
         }
         
         if(mini<= v[i] && v[i]<=maxi){
           cout<<1<<endl;
           return;
         }
         
         
     }
     
     
     
     
     int ans=LLONG_MAX;
     
     for(int i=0;i<n;i++){
       
          int mini=LLONG_MAX;
          int maxi=0;
          
          for(int j=i+1;j<n;j++){
            
              mini=min(mini,v[j]);
              maxi=max(maxi,v[j]);
              
              if(mini<=v[i] && v[i]<=maxi){
                 ans=min(ans,j-i+1);
                 break;
              }
          }
     }
     
     if(ans==LLONG_MAX){
       cout<<-1<<endl;
     }
     else cout<<ans<<endl;
     
    
     
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
