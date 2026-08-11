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

    struct caves{
        int k;
        int p = INT_MIN;
    };
    int n; cin >> n;
    vector<caves> arr(n);
    for(int i = 0; i < n; i++)
    {
            cin >> arr[i].k;
            for(int j = 0; j < arr[i].k ; j++)
            {
                int x ; cin >> x;
                x -= j;
                arr[i].p = max(arr[i].p, x);
            }
    }

    sort(arr.begin(), arr.end(), [](const caves& a, const caves& b){
            return a.p < b.p;
            });
    int power = -1;
    int curr = 0;
    for(int i = 0; i < n; i++)
    {
        if(curr+power <= arr[i].p)
        {
            power = arr[i].p+1-curr;
        }
        curr += arr[i].k;
    }

    cout << power << "\n";


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
