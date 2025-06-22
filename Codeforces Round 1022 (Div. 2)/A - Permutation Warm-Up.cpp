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

vector<vector<int>>ans;

void p(vector<int>&v, int i) {

    if (i==v.size()) {
        ans.pb(v);
        return;
    }


    for (int j=i; j<v.size(); j++) {
      
        swap(v[i], v[j]);
   
        p(v,i+1);

        swap(v[i], v[j]);
    }
}


void solve() {
  
  
   int n; cin>>n;
   
   int sum=0;
   
   int temp=n;
   
   for(int i=1;i<=n;i++){
     
       sum+=abs(temp-i);
       temp--;
   }
   

   
   cout<<sum/2+1<<endl;
      
	
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
