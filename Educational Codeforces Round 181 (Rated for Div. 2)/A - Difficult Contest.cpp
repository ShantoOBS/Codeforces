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
     
     
   string s; cin>>s;
   
   
   int n=s.size();
   map<char,int>mp;
  for(auto ch:s)mp[ch]++;
  
    string ans;
    
    
    if(mp['T']){
      
        while(mp['T']!=0){
          ans+='T';
          mp['T']--;
        }
        
        mp.erase(mp['T']);
        
    }
    
     if(mp['N']){
      
        while(mp['N']!=0){
          ans+='N';
          mp['N']--;
        }
        mp.erase(mp['F']);
    }
    
     if(mp['F']){
      
        while(mp['F']!=0){
          ans+='F';
          mp['F']--;
        }
        
        mp.erase(mp['F']);
        
    }
    
    for(auto u:mp){
      
         int i=0;
          while(i<u.second){
            ans+=u.first;
            i++;
          }
    }
    
    cout<<ans<<endl;
    
   
    
   
}

// tc : O(n)
// sc :  O(n)

int32_t main() {
    fastIO;
    
    int t; cin>>t;
    
    while(t--)solve();

    return 0;
}
