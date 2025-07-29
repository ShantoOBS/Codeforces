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


inline void solve()
{
   int n,c ; cin>>n>>c;
   
   vl v(n); in(v);
   
   sort(all(v));
   
   int cnt=0;
   
   for(int i=n-1;i>=0;i--){
     
         if(v[i]>c)continue;
         
         else{
           
               for(int j=i-1;j>=0;j--)v[j]*=2;
               
               cnt++;
               
         }
   }
   
  
  cout<<n-cnt<<endl;
   
  

} 

// tc :
// sc :

int32_t main() {
    fastIO;
    
    int t; cin>>t;
    while(t--)solve();

    return 0;
}
