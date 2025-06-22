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
    
     int n,m; cin>>n>>m;
     vector<vector<int>>v(n,vector<int>(m));
     
     int maxi=0;
     
     for(int i=0;i<n;i++){
       
          for(int j=0;j<m;j++ ){
            cin>>v[i][j];
            maxi=max(maxi,v[i][j]);
          }
     }
     
    int cnt=0;
    
    for(auto vec:v){
      
        for(auto u:vec)if(maxi==u)cnt++;
    }
    
  unordered_map<int,int>mp1,mp2;
  
   
   
   for(int i=0;i<n;i++){
     
     
       for(int j=0;j<m;j++){
         
            if(v[i][j]==maxi){
               
                mp1[i]++;
                mp2[j]++;
                
            }
       }
   }
   
   for(int i=0;i<n;i++){
     
        
         for(int j=0;j<m;j++){
              
              int val=mp1[i]+mp2[j];
              if(v[i][j]==maxi)val--;
             
              if(val>=cnt){
                cout<<maxi-1<<endl;
                return;
              }
         }
         
         
   }
   
   cout<<maxi<<endl;
   
   
   
   
   
   
     
      
    
    
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
