#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    
    ll n, x; cin >> n >> x;

    vector<pair<ll, ll>> nums;
    rep(i, 0,n)
    {

        ll y;
        cin >> y;

        if (y < x)
            nums.push_back({y, i});
    }

    sort(nums.begin(), nums .end());


    n = nums.size();
    int i = 0;
    int j = n-1;
    while(j > i)

    {
        ll r = x - nums[i].first;

        if (nums[j].first > r)
        {
            j--;
        }

        else if (nums[j].first < r)
        {  
            i++;
        }
        else
        {
            cout << nums[i].second+1 << " " << nums[j].second+1 << "\n";
            return;
        }
        
    }
        cout << "IMPOSSIBLE\n";

}

int main() {
    fastio;
        solve();
}