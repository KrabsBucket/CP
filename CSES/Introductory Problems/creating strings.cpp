#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    string s; cin >> s;
    sort(s.begin(), s.end());

    vector<string> perms;

    do{
        perms.push_back(s);
    }
    while(next_permutation(s.begin(), s.end()));

    cout << perms.size()<< "\n";
    for(const string& perm : perms)
    {
        cout << perm <<"\n";
    }
    
}

int main() {
    fastio;

    // LOCAL TESTING: Use your global input file
    freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);


    solve();

    return 0;
}
