#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>
#include <set>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    
    int n; cin >> n;
    unordered_map<string, int> ump;
    vector<string> a = {"Beatrice", "Sue", "Belinda", "Bessie", "Betsy", "Blue", "Bella", "Buttercup"};
    vector<pair<string, set<string>>> vec(8);
    sort(a.begin(), a.end());
    rep(i, 0, 8)
    {
        ump[a[i]] = i;
        vec[i].first = a[i];

    }

    rep(i , 0, n)
    {
        string x, y, trash;
        cin >> x >> trash >>trash >>trash>> trash >> y;
        vec[ump[x]].second.insert(y);
        vec[ump[y]].second.insert(x);
    }


    int i = 0;
    bool flag = false;
    while (i < vec.size())
    {

        if (flag || vec[i].second.size() < 2)
        {
            if(ump[vec[i].first] != -1)
            {
                cout << vec[i].first << "\n";
                ump[vec[i].first] =-1;
            }

            for(string s : vec[i].second)
            {
                if (ump[s] != -1)
                {
                    cout << s << "\n";
                    if (vec[ump[s]].second.size() == 2)
                    {
                        flag = true;
                        i = ump[s] -1;
                    }
                    else
                    {
                        flag = false;
                        i = 0;
                    }
                    ump[s] = -1;
                    
                }
            }
        }

        i++;
    }

        
        




}

int main() {
    fastio;

    // LOCAL TESTING: Use your global input file
   // freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);

    // USACO SUBMISSION: Uncomment these and change 'problemname'!
     freopen("lineup.in", "r", stdin);
     freopen("lineup.out", "w", stdout);

    solve();

    return 0;
}
