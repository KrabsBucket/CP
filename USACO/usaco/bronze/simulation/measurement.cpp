#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int n; cin >> n;
    vector<vector<int>> vec(101, vector<int> (3));
    vector<int> days(n+1);
    vec[0] = {7, 7, 7};
    // 0 -> B
    // 1 -> E 
    // 2 -> M
    
    rep(i, 0, n)
    {
        int day; cin >> day;
        days[i] = day;
        string name; cin >> name;
        int diff; cin >> diff;
        int x = 0;
        if (name[0] == 'B') x=0;
        else if (name[0] == 'E') x=1;
        else x=2;

        vec[day][x] = diff;

    }
    days[n] = 0;
    sort(days.begin(), days.end());

    vector<int> pc= {0, 0, 0};
    int change = 0;
    rep(i, 1, n+1)
    {

        vector<int> cows = {0, 0, 0};
        bool flag = false;
        int m = -1;
        rep(k, 0, 3)
        {
            vec[days[i]][k] += vec[days[i-1]][k]; 
            m = max(vec[days[i]][k], m);
        }

        rep(k, 0, 3)
        {
            if (vec[days[i]][k] == m)
            {
                cows[k] = 1;
            }
            if (cows[k] != pc[k])
            {
                flag = true;
            }

        }

        if (flag)
        {
            change++;
            pc = cows;
        }
    }
    cout << change << "\n";
}

int main() {
    fastio;

    // LOCAL TESTING: Use your global input file
     //freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);

    // USACO SUBMISSION: Uncomment these and change 'problemname'!
     freopen("measurement.in", "r", stdin);
     freopen("measurement.out", "w", stdout);

    solve();

    return 0;
}
