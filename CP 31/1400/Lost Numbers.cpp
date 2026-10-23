#include <bits/stdc++.h>
#include <iostream>
#include <map>

using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
const ll INF = 1e18;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define popcnt(x) __builtin_popcountll(x)
#define trailz(x) __builtin_ctzll(x)
#define leadz(x) __builtin_clzll(x)

void solve() {
    map<int, pair<int,int>> mp;
    vector<int> m = {4, 8, 15, 16, 23, 42};
    vector<int> ans(6);
    for(int i = 0; i < 6; i++)
    {
        for(int j = i+1; j < 6; j++)
        {
            mp[m[i]*m[j]] = {i,j};
        }
            
    }
    int x,y;
    cout << "? " << 1 <<" " << 2<< endl;
    cin >> x;
    cout << "? " << 2 <<" " << 3<< endl;
    cin >> y;




    int a,b,c,d;
    a = mp[x].first;
    b = mp[y].first;
    c = mp[x].second;
    d = mp[y].second;
    if(a == b)
    {
        ans[1] = m[a];
        ans[0] = m[c];
        ans[2] = m[d];
    }
    else if(a == d)
    {
        ans[1] = m[a];
        ans[0] = m[c];
        ans[2] = m[b];
    }
    else if(c == b)
    {
        ans[1] = m[c];
        ans[0] = m[a];
        ans[2] = m[d];
    }
    else
    {
        ans[1] = m[c];
        ans[0] = m[a];
        ans[2] = m[b];
    }

    cout << "? " << 4 <<" " << 5<< endl;
    cin >> x;
    cout << "? " << 5 <<" " << 6<< endl;
    cin >> y;
   
    a = mp[x].first;
    b = mp[y].first;
    c = mp[x].second;
    d = mp[y].second;
    if(a == b)
    {
        ans[4] = m[a];
        ans[3] = m[c];
        ans[5] = m[d];
    }
    else if(a == d)
    {
        ans[4] = m[a];
        ans[3] = m[c];
        ans[5] = m[b];
    }
    else if (c == d)
    {
        ans[4] = m[c];
        ans[3] = m[a];
        ans[5] = m[b];
    }
    else
    {
        ans[4] = m[c];
        ans[3] = m[a];
        ans[5] = m[d];
    }
    cout << "! ";
    for(auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl; 
}


int main() {
    fastio;


        solve();

    return 0;
}
