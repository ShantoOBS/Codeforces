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
    
    vl pre(n),suf(v);
    
    pre[0]=v[0];
    
    for(int i=1;i<n ;i++)pre[i]=min(v[i],pre[i-1]);
    
    suf[n-1]=v[n-1];
    
    for(int i=n-2;i>=0;i--)suf[i]=max(suf[i],suf[i+1]);
    
    
    string ans;
    
    
    for(int i=0;i<n;i++){
      
       if(v[i]==suf[i] || v[i]==pre[i])ans.push_back('1');
       else ans.push_back('0');
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
