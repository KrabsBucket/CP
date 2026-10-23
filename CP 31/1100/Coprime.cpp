#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

vector<int> coprimes[1001];
void precompute() {
    for (int i = 1; i <= 1000; ++i) {
        for (int j = 1; j <= 1000; ++j) {
            if (__gcd(i, j) == 1) {
                coprimes[i].push_back(j);
            }
        }
    }
}
int main() {
    fastio;
    precompute();

    int T; cin >> T;
    while(T--) {
        
        int n; cin >>n;
        int maxxx = -1;

        vector<int> id(1001, -1);
        for (int i = 0; i < n; ++i) {
            int x; cin >> x;
            id[x] = i+1;
        }


        int maxx = -1;
    
        for (int i=1; i<=1000; ++i)
        {
            if (id[i] == -1) continue;
            for (int j: coprimes[i])
            {
                if (id[j] != -1)
                {
                    maxx = max(maxx, id[i] + id[j]);
                }
            }
        }
        cout << maxx << '\n';
    }
}