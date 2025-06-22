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
  
  
    int n; cin>>n; 
    
     string s; cin>>s;
     
      if(s=="AB"){
        cout<<"Alice"<<endl;
        return;
      }
      
      if(s=="BA"){
        cout<<"Bob"<<endl;
        return;
      }
      
      if(s[0]=='B' && s[n-1]=='B'){
        cout<<"Bob"<<endl;
        return;
      }
      
      if(s[0]=='A' && s[n-1]=='A'){
        cout<<"Alice"<<endl;
        return;
      }
      
      
      int a=0,b=0;
      
      for(int i=0;i<n;i++){
        
        if(s[i]=='A')a++;
        else b++;
      }
      
     if(s[0]=='A' && s[n-1]=='B'){
       
         if(b==1){
           cout<<"Alice"<<endl;
         
           
         }
         else{
            cout<<"Bob"<<endl;
         }
         
     
     }
     
     else{
       
         if(s[n-2]=='A'){
           cout<<"Alice"<<endl;
           
         }
         else{
           cout<<"Bob"<<endl;
            
         }
         
    
     }
      
      
      
      
	
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
