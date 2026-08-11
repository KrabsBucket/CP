#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    vector<pair<int, int>> bucket(3); 
    rep(i, 0, 3)
    { cin >> bucket[i].first >> bucket[i].second; } 
    rep(i, 0, 100) 
    { int cur = i%3; int next = (i+1)%3; int milk = min((bucket[next].first - bucket[next].second), bucket[cur].second);
        bucket[cur].second -= milk; bucket[next].second += milk; } 
    rep(i, 0, 3) 
    { cout << bucket[i].second<< "\n"; }
    
}

int main() {
    fastio;


     freopen("mixmilk.in", "r", stdin);
     freopen("mixmilk.out", "w", stdout);

    solve();

    return 0;
}
