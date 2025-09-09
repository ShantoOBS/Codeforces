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


bool isPrime(int n){
     
      for(int i=2;i<=sqrt(n);i++)if(n%i==0)return false;
      
      return true;
}

inline void solve(){
    
   
   
   int a,b; cin>>a>>b;
   
   int maxi=-1;
   
   if(b%2==0){
     
       int h=b/2;
       int temp=a*h+2;
       if( temp %2==0    )maxi=max(maxi,temp);
   }
   
   if(b%3==0){
     
       int h=b/3;
       int temp=a*h+3;
       if( temp %2==0    )maxi=max(maxi,temp);
     
      
   }
   
   int temp=a*b+1;
   
   if( temp %2==0    )maxi=max(maxi,temp);
   
   
   
   cout<<maxi<<endl;
   

} 

// tc :
// sc :

int32_t main() {
    fastIO;
    
    int t; cin>>t;
    while(t--)solve();

    return 0;
}
