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


void solve() {
    
    int n; cin>>n;
    
     vl v(n);
     
       
       for(auto &k:v)cin>>k;
      
       
       stack<int>st;
       
       
       
       
       for(int i=0;i<n;i++){
       
          if(st.size() )  {
            
              if(st.top()+1>=v[i]){continue;}
              
              st.push(v[i]);
          }
          else{
            st.push(v[i]);
          }
            
       }
       
       
       cout<<st.size()<<endl;
       

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
