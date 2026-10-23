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
   vector<pair<int,int>> vec;
   for(int i =0; i<n;i++)
   {
       int x; cin >> x;
       if (x < i+1)
       {
           vec.push_back({x, i+1});
       }
   }
   ll c =0;
    for(int j = 0; j < vec.size(); j++) 
    {

            auto it = lower_bound(vec.begin(), vec.end(), vec[j].first, 
                [](const pair<int, int>& element, int value){
                    return element.second < value;
                });
            c+= (it - vec.begin());

        }
   cout << c << "\n";

   
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
