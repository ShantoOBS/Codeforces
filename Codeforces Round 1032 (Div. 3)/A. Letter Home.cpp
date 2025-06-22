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
    
    
    int n,s; cin>>n>>s;
    
    vl v(n);
    
     for(auto &k:v)cin>>k;
     
     sort(all(v));
     
     int maxi=max(v[n-1],s);
     int mini=min(v[0],s);
     
     
     if(n==1 && s==v[n-1]){
       cout<<0<<endl;
       return;
     }
     
     
     
     int d1=maxi-s;
     
     int d2=s-mini;
     
     
     if(d1<d2){
        
          cout<<d1*2+d2<<endl;
     }
     else{
       
        cout<<d2*2+d1<<endl;
       
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
