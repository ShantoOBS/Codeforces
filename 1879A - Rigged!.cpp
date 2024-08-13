#include <bits/stdc++.h>
 
using namespace std;

const int N = 109;

int t;
int n;
int s[N], e[N];
 
int main() {
    cin >> t;
    for (int tc = 0; tc < t; ++tc) {
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> s[i] >> e[i];
        }
        
        bool ok = true;
        for (int i = 1; i < n; ++i) 
            if (s[i] >= s[0] && e[i] >= e[0])
                ok = false;
        
        if (!ok) {
            puts("-1");
            continue;
        }
        
        cout << s[0] << endl;
    }
    return 0;
}
