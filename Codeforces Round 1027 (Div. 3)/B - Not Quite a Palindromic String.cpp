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
    
     int n,k; cin>>n>>k;
     
     string s; cin>>s;
     
     int a=count(all(s),'0');
     int b=count(all(s),'1');
     
    
    
    
    
    while( (a>0 || b>0) && k>0){
      
        if(a>=2 && a>=b){
          a-=2;
        }
        else if(b>=2 && a<=b){
          b-=2;
          
        }
        else break;
        
        k--;
    }
    
    
    if(k){
       
        if(a==b){
          cout<<"NO"<<endl;
        }
        else{
          cout<<"YES"<<endl;
        }
         
    }
    else{
      
        if(a!=b){
          cout<<"NO"<<endl;
        }
        else{
          cout<<"YES"<<endl;
        }
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
