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
    
    
     int n; cin>>n;
     
     string s; cin>>s;
     
     
     for(int i=1;i<n;i++){
       
         if(s[i-1]==s[i]){
           cout<<"YES"<<endl;
           return;
         }
     }
     
     
     unordered_map<char,int>mp;
     
     for(int i=1;i<n-1;i++)mp[s[i]]++;
     
     for(auto u:mp){
       if(u.second>=2){
           cout<<"YES"<<endl;
           return;
       }    
       
       
     }
     
     if(mp.find(s[0])!=mp.end() ||  mp.find(s[n-1])!=mp.end()){
       cout<<"YES"<<endl;
       return;
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
