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
     
      vl a(n),b(n);
      
        for(auto &k:a)cin>>k;
        
        for(auto &k:b)cin>>k;
        
        
        vector<pair<int,int>>v;
        
        for(int i=0;i<n;i++){
          
            for(int j=0;j+1<n;j++){
              
                 if(a[j]>a[j+1]){
                    
                    swap(a[j],a[j+1]);
                    v.emplace_back(1,j+1);
                 }
            }
        }
        
        
          for(int i=0;i<n;i++){
          
            for(int j=0;j+1<n;j++){
              
                 if(b[j]>b[j+1]){
                    
                    swap(b[j],b[j+1]);
                    v.emplace_back(2,j+1);
                 }
            }
        }
        
        
        
          for(int i=0;i<n;i++){
          
              
                 if(a[i]>b[i]){
                    swap(a[i],b[i]);
                    v.emplace_back(3,i+1);
                 }
            }
          
        
        
    
       
       
      cout<<v.size()<<endl;
      
      for(auto u:v)cout<<u.first<<" "<<u.second<<endl;
        
        
     
      
    
    
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
