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
    vector<int> arr(n+2);
    for(int i =0; i < k ; i++)
    {
        int x,y; cin >> x >> y;
        arr[x] +=1;
        arr[ y+1] -= 1;
    }

    for(int i = 1; i <=n+1; i++)
    {
        arr[i] += arr[i-1];
    }
    sort(arr.begin()+1, arr.end()-1);
    int mid = (n+1)/2;
    cout << arr[mid] << "\n";



    
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

        solve();

    return 0;
}
