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


const int mx=1e6+23;




void solve() {
 
   
   int n,m,p,q; cin>> n>>m >> p>>q;
   
     if(n%p==0){
       
         if((n/p)*q==m){
           cout<<"YES"<<endl;
          
         }
         else{
           
          cout<<"NO"<<endl;
         }
         
        
     }else{
       
       cout<<"YES"<<endl;
     }
     
    
 
     
       
       
    
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
