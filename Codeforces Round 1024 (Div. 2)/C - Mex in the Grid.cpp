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


const int mx=1e6+23;




void solve() {
 
   
    int n; cin>>n;
    
    
    
    int arr[n][n];
    
     for(int i=0;i<n;i++){
       
        for(int j=0;j<n;j++){
           arr[i][j]=0;
        }
       
     }
     
     int cnt=(n*n)-1;
    
     

     int right=0 ,left=n-1, top=0, bottom=n-1;
     
     while(right<left || top<bottom){
       
       for(int i=right;i<=left;i++)arr[top][i]=cnt--;
      
       top++;
       
     
       
       for(int i=top;i<=bottom;i++)arr[i][left]=cnt--;
      
       left--;
   
       
       for(int i=left;i>=right;i--)arr[bottom][i]=cnt--;
       
       bottom--;
       
      
       
       for(int i=bottom;i>=top;i--)arr[i][right]=cnt--;
    
       
       right++;

          
     }
     
     
    
     
      for(int i=0;i<n;i++){
       
        for(int j=0;j<n;j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
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
