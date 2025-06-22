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
    
    int n; cin>>n;
     vl v(n);
     
       for(auto &k:v)cin>>k;
       
      
      
     int one=count(all(v),1)  ;
     
     if(one==n){
       cout<<"YES"<<endl;
       return;
     }
     
     if(n-one==n){
       cout<<"YES"<<endl;
       return;
     }
       
     for(int i=0;i<n-1;i++){
        if(v[i]==0 && v[i+1]==0){
          cout<<"YES"<<endl;
          return;
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
