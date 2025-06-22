#include <bits/stdc++.h>
using namespace std;

#define fastIO                                                                 \
    ios::sync_with_stdio(false);                                               \
    cin.tie(NULL);                                                             \
    cout.tie(NULL);                                                            \
    cout.precision(numeric_limits<double>::max_digits10);

#define int long long
#define all(v) sort(v.begin(),v.end())
#define vl vector<int>

const int mod=1e9+7;

void print(vector<int>&v){for(auto u:v)cout<<u<<" "; cout<<endl;}


void solve() {
   
     string s; cin>>s;
     
     map<int,int>mp;
     
     for(auto ch:s)mp[ch-'0']++;
     
     string ans;
     
     for(int i=0;i<10;i++){
         
         
           int need=9-i;
           
           for(int j=need;j<=9;j++){
             
               if(mp[j]>0){
                 
                   ans+=(char)j+'0';
                   mp[j]--;
                   break;
               }
           }
     }
     
     
     cout<<ans<<endl;


	
}

// tc : 
// sc : 

int32_t main() {
    fastIO;

    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
