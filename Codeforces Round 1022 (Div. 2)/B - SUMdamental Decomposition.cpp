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
  
   int n,x; cin>>n>>x;
   
   if(n==1){
     
     if(x==0){
       cout<<-1<<endl;
     }else{
     cout<<x<<endl;
     }
     return;
   }
   

   
   int len=__builtin_popcountll(x);
   
   
  
   
   if(len>n){
    cout<<x<<endl;
     return;
   }
   
    int ans=x+(n-len);
    
   if((n-len)%2){
     
       if(x==0 || x==1){
         ans+=3;
       }
       else ans++;
   }
  
   
   
   cout<<ans<<endl;
   
    
     
      
	
}

// tc : 
// sc : 

int32_t main() {
    fastIO;

    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
