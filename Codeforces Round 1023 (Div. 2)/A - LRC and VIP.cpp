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

const int mod=1e9+7;

void print(vector<int>&v){for(auto u:v)cout<<u<<" "; cout<<endl;}



void solve() {
 
 
     
     int n; cin>>n;
     
     vl v(n);
     
      for(auto &k:v)cin>>k;
      
      
      
      
      for(int i=0;i<n;i++){
        
          int temp=0;
          
        
          
            for(int j=0;j<n;j++){
              
                if(i==j)continue;
                
                temp=__gcd(temp,v[j]);
            }
            
            if(temp!=v[i]){
               cout<<"YES"<<endl;
               
               for(int k=0;k<n;k++){
                 
                  if(i==k){
                    cout<<1<<" ";
                  }
                  else cout<<2<<" ";
               }
               
               cout<<endl;
               return ;
            }
      }
      
      cout<<"NO"<<endl;
    
    
    
   
   
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
