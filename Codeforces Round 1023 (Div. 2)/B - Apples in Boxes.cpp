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

const int mod=1e9+7;

void print(vector<int>&v){for(auto u:v)cout<<u<<" "; cout<<endl;}



void solve() {
 
 
    int n,k;
    cin >> n >> k;
    vl a(n);
    
    for(auto &k:a)cin>>k;
    
    int ma = *max_element(all(a));
    int mi = *min_element(all(a));
 
    int cma = 0, cmi = 0;
 
    for(int i=0;i<n;i++) {
        if(a[i] == ma) cma++;
    }
    
    int sum = accumulate(all(a),0LL);
    
    if(ma - mi <= k || ma - mi == k+1 && cma == 1) {
        if(sum & 1) {
            cout << "Tom\n";
        }
        else{
            cout << "Jerry\n";
        }
    }
    else{
        cout << "Jerry\n";
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
