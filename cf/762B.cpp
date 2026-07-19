#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int a, b, c; 
    cin >> a >> b >> c;

    int m; 
    cin >> m;
    vector<pair<int, string>> arr(m);
    rep(i, 0, m) {
        cin >> arr[i].first >> arr[i].second;
    }

    sort(arr.begin(), arr.end());

    long long cost = 0;
    int ms = 0;

    rep(i, 0, m) {
        if (arr[i].second == "USB" && a > 0)
        { 
            cost += arr[i].first;
            ms++;
            a--;
            arr[i].second = "TOOK";
        } 
        else if (arr[i].second == "PS/2" && b > 0)
        {             
            cost += arr[i].first;
            ms++;
            b--;
            arr[i].second = "TOOK";
        }
    }

    rep(i, 0, m) {
        if (arr[i].second != "TOOK" && c > 0)
        {            
            cost += arr[i].first;
            ms++;
            c--;
            arr[i].second = "TOOK";       
        }
    }

    cout << ms << " " << cost << "\n"; 
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
        // freopen("/Users/divyesamdani/Documents/Stuff/output.txt", "w", stdout);
    #endif

        solve();

    return 0;
}
