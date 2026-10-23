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

string s; 
vector<int> max_pref;
int is_fatal(int idx)
{
    if(s[idx] == 'L' && s[idx+1] == 'R' && max_pref[idx] > idx)
    {
        return 1;
    }
    return 0;
}



void solve() {
    int n, q;cin >> n >> q;
    vector<int> arr(n+1);
    int flg = 1;
    for(int i =1; i <= n; i++)
    {
        cin >> arr[i];
        if(arr[i] != i )
        {
            flg = 0;
        }
    }
    cin >> s;
    s = " " +s ;

    max_pref.assign(n+1, 0);
    max_pref[0] = INT_MIN;
    for(int i = 1; i <= n; i++)
    {
        max_pref[i] = max(max_pref[i-1], arr[i]);
    }
    int fatal = 0;
    for(int i = 1; i < n; i++)
    {
        fatal += is_fatal(i);
    }
    for(int i = 0; i < q; i++)
    {
        int x ; cin >> x;
        fatal -= is_fatal(x-1);
        fatal -= is_fatal(x);
        s[x] = (s[x] == 'R' ? 'L' : 'R');
        fatal += is_fatal(x-1);
        fatal += is_fatal(x);
        cout << (fatal ? "NO\n" : "YES\n");

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
