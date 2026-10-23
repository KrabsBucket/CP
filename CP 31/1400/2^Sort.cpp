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
    int n, k; cin >>n >> k;
    vector<int> arr(n);
    for(int i =0;i < n;i++)
    {
        cin >> arr[i];
    }
    int i = 0;
    int j = 0;
    int s = 0;
    while(j < n-1)
    {
        i = j;
        while(j+1< n && j-i != k)
        {
            if(arr[j] < 2*arr[j+1]) j++;
            else {
                i = j+1;
                j++;
            }
        }

        while (j< n && j-i == k && arr[j-1] < 2*arr[j])
        {
            s++;
            j++;
            i++;
        }

    }
    cout << s << "\n";


    
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
