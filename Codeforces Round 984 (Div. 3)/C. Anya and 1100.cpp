// Code_Is_Fun
#include<bits/stdc++.h>
using namespace std;

// Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Shanto cout.tie(NULL);
#define yes cout << "YES\n";
#define no cout << "NO\n";

// Aliases
using ll = long long;


bool check(const string &s, ll pos) {
    return pos >= 0 && pos + 3 < s.size() && s.substr(pos, 4) == "1100";
}

void solve() {
    
    string s;
    cin >> s;
    
    ll q;
    cin >> q;
    
    set<ll> p;
    
    for (ll i = 0; i + 3 < s.size(); ++i) {
        if (check(s, i)) {
            p.insert(i);
        }
    }

    while (q--) {
        
        ll i;
        char v;
        cin >> i >> v;
        
        i--; 
        for (ll j = i - 3; j <= i + 3; ++j) {
            if (check(s, j)) {
                p.erase(j);
            }
        }
        
       
        s[i] = v;
        
    
        for (ll j = i - 3; j <= i + 3; ++j) {
            if (check(s, j)) {
                p.insert(j);
            }
        }
        
        if (!p.empty()) {
            yes;
        } else {
            no;
        }
    }
}

int main() {
    
    Code By Shanto
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
