#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>
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
    string s; cin >> s;
    unordered_map<char, int> mp;
    int rq = 0;
    for(auto x : s)
    {
        if(mp[x] == 0)
        {
            rq++;
            mp[x]++;
        }
    }
    array<int, 52> fq;
    for(int i = 0; i < 52; i++)
    {
        fq[i] = 0;
    }
    int m = 0;
    int x = INT_MAX;
    int i = 0, j = 0;


    while(j < n)
    {
        int c = s[j];
        if(c >95)
        {
            c -= (97);
            c +=26;
        }
        else
        {
            c-=65;
        }
        if(fq[c] == 0)
        {
            m++;
        }
        fq[c]++;

        while(m == rq)
        {
            x = min(x, (j-i+1));
            int p = s[i];
            if(p > 95)
            {
                p-=97;
                p+=26;
            }
            else
            {
                p-=65;
            }
            if(fq[p] == 1)
            {
                m--;
            }
            fq[p]--;
            i++;
                
        }
        j++;

    }

    cout << x << "\n";




    
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

        solve();

    return 0;
}
