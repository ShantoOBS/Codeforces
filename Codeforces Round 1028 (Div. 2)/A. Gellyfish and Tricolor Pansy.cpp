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
    
    int a,b,c,d; cin>>a>>b>>c>>d;
    
    int mini1=min(a,c);
    
    int mini2=min(b,d);
    
    
    if(mini1<mini2){
      cout<<"Flower"<<endl;
    }
    else{
      cout<<"Gellyfish"<<endl;
    }
  
     
     
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
