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
    
    int a,b,x,y; cin>> a>>b>>x>>y;
    
    if(a==b){
      cout<<0<<endl;
    }
    else if(a>b){
       
       int x=a^1;
       
        if(x==b){
          cout<<y<<endl;
          
        }
        else{
          cout<<-1<<endl;
        }
        
    }
    else{
      
          int need=abs(a-b);
          
          if(x<=y){
            cout<<need*x<<endl;
         
          }
         else {
           
            int cnt=0,e=0;
           
            for(int i=a+1;i<=b;i++){
              if(i&1)cnt++;
              else e++;
            }
            
            cout<<(y*cnt)+(e*x)<<endl;
           
         }
          
        
    }
    
    
    
    
    
   
}

// tc :
// sc :

int32_t main() {
    fastIO;
    
    int t; cin>>t;
    
    while(t--)solve();

    return 0;
}
