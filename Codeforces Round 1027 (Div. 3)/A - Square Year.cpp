#include <bits/stdc++.h>
using namespace std;

#define fastIO                                                                 \
    ios::sync_with_stdio(false);                                               \
    cin.tie(NULL);                                                             \
    cout.tie(NULL);                                                            \
    cout.precision(numeric_limits<double>::max_digits10);

#define ll long long
#define all(v) v.begin(),v.end()
#define vl vector<int>
#define pb emplace_back
#define in(v) for(auto &k:v)cin>>k;

const int mod=1e9+7;

void print(vector<int>&v){for(auto u:v)cout<<u<<" "; cout<<endl;}


const int mx=1e6+23;


void solve() {
    
     string s; cin>>s;
     
     int num=stoi(s);
     
    
    
     
     for(int i=0;i<=99;i++){
       
       
       for(int j=0;j<=99;j++){
         
         if((i+j)*(i+j)==num){
           cout<<i<<" "<<j<<endl;
           return;
         }
       }
          
  
     }
     cout<<-1<<endl;
     
      
   

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
