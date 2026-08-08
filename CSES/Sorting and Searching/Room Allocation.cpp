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
    vector<int> rooms (n);
    vector<pair<pair<int, int>, int>> intial(n);

    for(int i = 0; i < n ; i++)
    {
        cin >> intial[i].first.first >> intial[i].first.second;
        intial[i].second = i;
    }

    sort(intial.begin(), intial.end());
    using room = pair<int, int>;
    priority_queue<room, std::vector<room>, std::greater<room>> pq;

    int tot = 0;
    for(int i = 0; i < n; i++)
    {
        if(pq.empty() || pq.top().first >= intial[i].first.first)
        {
            tot++;
            pq.push({intial[i].first.second, tot});
            rooms[intial[i].second] = tot;
        }
        else
        {
            room idx = pq.top();
            pq.pop();
            rooms[intial[i].second] = idx.second;
            pq.push({intial[i].first.second, idx.second});


        }

        
    }

    cout << tot << "\n";
    for(int &x : rooms)
    {
        cout << x << " ";

    }
    cout << "\n";

    
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

        solve();

    return 0;
}
