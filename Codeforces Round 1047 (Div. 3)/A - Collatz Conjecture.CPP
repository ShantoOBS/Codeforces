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




inline void solve(){
    
    int k,x; cin>>k>>x;
    
    
    if(k==1){
       cout<<x*2<<endl;
       return;
    }
    
    int num=1;
    
    for(int i=0;i<k;i++){
      
         x=x*2;
    }
    
  
     cout<<x<<endl;
    
  

} 

// tc :
// sc :

int32_t main() {
    fastIO;
    
    int t; cin>>t;
    while(t--)solve();

    return 0;
}
