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

const int mod=1e9+7;

void print(vector<int>&v){for(auto u:v)cout<<u<<" "; cout<<endl;}


const int mx=1e6+23;

int solve(vl v){
  
     
     
      
}


void solve() {
    
    int n; cin>>n;
    
    vl v(n);
      
      for(auto &k:v)cin>>k;
      
      
      sort(all(v));
      
      
      if( (v[0]&1 && v[n-1]&1) || (v[0]%2==0 && v[n-1]%2==0)  ){
        cout<<0<<endl;
        return;
      }
      
      int index1=0,index2=0,index3=0,index4=0;
      
      
      for(int i=0;i<n;i++){
        
         if(v[i]&1){
           index1=i+1;
           break;
         }
         
      }
      
      for(int i=n-1;i>=0;i--){
        
         if(v[i]&1){
           index2=i+1;
           break;
         }
      }
      
      
      
     for(int i=0;i<n;i++){
        
         if(v[i]%2==0){
           index3=i+1;
           break;
         }
         
      }
      
      for(int i=n-1;i>=0;i--){
        
         if(v[i]%2==0){
           index4=i+1;
           break;
         }
      }
      
      

     
      int cnt1=index2-index1+1;
      int cnt2=index4-index3+1;
      
      
      
      
      cout<<min(n-cnt1,n-cnt2)<<endl;
    
      

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
