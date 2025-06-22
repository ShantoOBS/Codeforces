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

const int M=998244353;

int po[100001];

void solve() {
    
  int n; cin>>n;
  
  vl p(n),q(n);  in(p); in(q);
  
  
   
  
   vector<int> posa(n), posb(n);
 
    for(int i=0;i<n;i++) {
        posa[p[i]] = i;
        posb[q[i]] = i;
    }
 
    vl ans;
 
    int x=0,y=0;
    
    for(int i=0;i<n;i++) {
      
        x = max(x,p[i]);
        y = max(y,q[i]);
 
        pair<int ,int> p1 = {x, q[i - posa[x]]};
        pair<int ,int> p2 = {y, p[i - posb[y]]};
        pair<int ,int> ansp = max(p1,p2);
 
        ans.pb( (  (po[ansp.first] + po[ansp.second]) % M) );
    }
    
    for(auto u:ans)cout<<u<<" ";
    
    cout<<endl;
     
     
}

// tc :
// sc :

int32_t main() {
    fastIO;
      int t=1;
      cin>>t;
       po[0] = 1;
      for(int i =1 ; i<= 100000; i++) {
        po[i] = 2 * po[i-1] % M;
      }
      while(t--)solve();

    return 0;
}
