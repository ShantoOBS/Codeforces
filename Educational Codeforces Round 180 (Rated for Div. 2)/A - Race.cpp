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
    
   
     int a,x,y; cin>>a>>x>>y;
     
     if(x==a || y==a){
       cout<<"YES"<<endl;
       return;
     }
     int temp=( (x+y)&1?x+y+1:x+y)/2;
     
    // cout<<temp<<endl;
     
     int dis=abs(x-temp) + abs(y-temp);
     
     int a_dis=abs(x-a) + abs(y-a);
     
     if(dis<a_dis){
       cout<<"YES"<<endl;
     }
     else{
       cout<<"NO"<<endl;
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
