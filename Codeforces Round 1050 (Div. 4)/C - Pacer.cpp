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
    
   
   int n,m; cin>>n>>m;
   
   unordered_map<int,int>mp;
   
   vector<pair<int,int>>v;
   
   while(n--){
     
        int a,b;
        cin>>a>>b;
        
        v.pb(a,b);
        
        mp[a]=b;
   }
   
   
   
   sort(v.begin(),v.end());
   
   
   int ans=0;
   
   int preNum=0;
   int prePos=0;
   
  for(int i=0;i<v.size();i++){
    
    
      int num2=v[i].first;
      int pos2=v[i].second;
      
      int temp=num2-preNum-1;
      
      if(prePos != pos2){
         if(temp&1)ans+=temp;
         else ans+=temp+1;
      }
      else{
        
           if(temp&1)ans+=temp+1;
           else ans+=temp;
      }
      
      
      preNum=num2;
      prePos=pos2;
     
      
  }

  if(preNum<m){
    ans+=m-preNum;
  }
  
  cout<<ans<<endl;
   
   
   
  
   
   

} 

// tc :
// sc :

int32_t main() {
    fastIO;
    
    int t; cin>>t;
    while(t--)solve();

    return 0;
}
