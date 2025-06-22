#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define pii pair<ll,ll>
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define fi first
#define se second
#define vi vector<ll>

const ll INFLL = LLONG_MAX - 1;
const int MOD = 1e9 + 7;

template <typename A, typename B> std::ostream& operator<< (std::ostream &cout, const std::pair<A, B> &p) { return cout << p.first << ' ' << p.second; } template <typename A, size_t n> std::ostream& operator<< (std::ostream &cout, const std::array<A, n> &v) { for (int i = 0; i < int(n) - 1; ++i) cout << v[i] << ' '; return (n ? cout << v.back(): cout << '\n'); } template <typename A> std::ostream& operator<< (std::ostream &cout, const std::vector<A> &v) { for (int i = 0; i < int(v.size()) - 1; ++i) cout << v[i] << ' '; return (v.size() ? cout << v.back(): cout << '\n'); }
template <typename A, typename B> std::istream& operator>> (std::istream &cin, std::pair<A, B> &p) { cin >> p.first; return cin >> p.second; } template <typename A, size_t n> std::istream& operator>> (std::istream &cin, std::array<A, n> &v) { for (int i = 0; i < n; i++) cin >> v[i]; return cin; } template <typename A> std::istream& operator>> (std::istream &cin, std::vector<A> &v) { for (int i = 0; i < v.size(); i++) cin >> v[i]; return cin; }
void fastio() 
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
int main()
{
    fastio();
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        cin>>a;
        sort(a.begin(),a.end());
        multiset<int> s;
        for(int i=0;i<n;i++)
        {
            if(abs(i-(n-i-1))<=k+1)
            {
                s.insert(a[i]);
            }
        }
        cout<<*s.rbegin()-*s.begin()+1<<endl;
    }
}
