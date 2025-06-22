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
   
    vl v(n);  in(v);
    
    vl mi(5001, INT_MAX);
    
      queue<int>q;
    
    for(int i=0;i<n;i++){
      
         mi[v[i]]=0;
         q.push(v[i]);
    }
   
    
    int g=v[0];
    
    int even=0,odd=0;
    
    for(auto u:v)if(u&1)odd++; else even++;
    
    
    for(int i=1;i<n;i++)g=__gcd(g,v[i]);
    
 
    int cnt=count(all(v),g);
  
    
    if(cnt>=1){
      
     cout<<n-cnt<<endl;
     return;
        
    }
    
  
    
    while (q.size())
    {
        int val = q.front();
        q.pop();
        for (auto x : v)
        {
            int gc = gcd(x,val);
            if (mi[gc] == INT_MAX)
            {
                mi[gc] = 1 + mi[val];
                q.push(gc);
            }
        }
    }
    
    cout<<n+mi[g]-1<<endl;
     
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
