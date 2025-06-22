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
     
     vl v(n); in(v);
     
     

     
     int ans=LLONG_MAX;
     
     
     int i=0;
     
     while(i<n){
       
         int index1=i;
         
         int temp=v[i];
         
         while(i<n && v[i]==temp)i++;
         
         int index2=i;
         
         if(i>n)break;
         
         int val1=index1*temp;
         int val2=(n-index2)*temp;
         
       //  cout<<val1<<" "<<val2<<endl;
         
         ans=min(ans,val1+val2);
         
     }


     cout<<ans<<endl;
    
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
