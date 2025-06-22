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
    
    string s;cin>>s;
    
       int n=s.size();
       
       int ans=0;
       
       stack<char>st;
       
       
       for(int i=0;i<n;i++){
         
          if(s[i]==')'){
            
              st.pop();
          }
          else{
             st.push(')');
          }
          
          if(st.empty())ans++;
       }
       
       
       if(ans>1){
         cout<<"YES"<<endl;
       }
       else cout<<"NO"<<endl;
       
 
     
      // cout<<"NO"<<endl;
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
