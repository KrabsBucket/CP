#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
const ll INF = 1e18;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define popcnt(x) __builtin_popcountll(x)
#define trailz(x) __builtin_ctzll(x)
#define leadz(x) __builtin_clzll(x)

void solve() {
    int n; cin >> n;
    int p = n;
    if(n < 24)
    {
        cout << "NO\n";
        return;
    }
    vector<int> vec(sqrt(n)+1, 0);
    for(int i = 2; i*i <= n; i++)
    {
        while(n%i == 0)
        {
            n/=i;
            vec[i]++;
        }
    }
    int a = 1, b = 1, c = 1;
    int  m = vec.size();
    for(int i = 2; i < m; i++)
    {
        if(vec[i] > 0)
        {
            a = i;
            vec[i]--;
            break;
        }
    }
    for(int i = 2; i < m; i++)
    {
        while(vec[i] > 0 && b <= a)
        {
            b *= i;
            vec[i]--;
        }
    }
    c = (p / (a*b));
    if(a == b || b ==c || c ==a || a ==1 || b == 1 || c ==1)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
        cout << a << " "<< b << " " << c << "\n";
    }




    
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
