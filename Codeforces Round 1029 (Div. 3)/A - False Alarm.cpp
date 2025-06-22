#include <bits/stdc++.h>
using namespace std;

void solve(){
  
     int n,x; cin>>n>>x;
     
     vector<int>v(n);
     
       for(auto &k:v)cin>>k;
       
       if(n<=x){
         cout<<"YES"<<endl;
         return;
       }
       
       
       for(int i=0;i<n;i++){
         
           if(v[i]==1){
             
               while(x-- && i<n){
                   v[i]=0;
                   i++;
               }
               
               break;
           }
       }
       
       if(count(v.begin(),v.end(),1)){
         cout<<"NO"<<endl;
       }
       else{
         cout<<"YES"<<endl;
       }
}
int main() 
{
    int t; cin>>t;
    
    while(t--)solve();
}
