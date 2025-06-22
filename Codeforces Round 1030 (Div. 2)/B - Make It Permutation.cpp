#include <iostream>
using namespace std;
int main(){
int t,n;cin>>t;
while(t--)
{cin>>n;
cout<<2*n-1<<endl;
for(int i=0;i<n;i++)
{cout<<i+1<<" "<<1<<" "<<i+1<<endl;
if(i<n-1)
cout<<i+1<<" "<<i+2<<" "<<n<<endl;}
}
    return 0;
}
