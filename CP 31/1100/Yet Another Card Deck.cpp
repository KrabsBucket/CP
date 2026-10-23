#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, q; cin >> n >> q;
    vector<int> arr(n);
    vector<int> query(q);
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < q; i++) cin >> query[i];

    vector<int> map(51);
    for (int i = n - 1; i > -1; i--)
        map[arr[i]] = i;

    vector<int> indices; 

    for (int i = 0; i < q; i++)
    {
        int target_orig = map[query[i]];
        
        int found_idx = -1;
        for (int j = 0; j < indices.size(); j++) {
            if (indices[j] == target_orig) {
                found_idx = j;
                break;
            }
        }

        if (found_idx != -1) {
            cout << indices.size() - found_idx << " ";
            indices.erase(indices.begin() + found_idx);
            indices.push_back(target_orig);
        }
        else {
            int count = 0;
            for (int j = 0; j < indices.size(); j++) {
                if (indices[j] > target_orig)
                    count++;
            }
            cout << target_orig + count + 1 << " ";
            indices.push_back(target_orig);
        }
    }
    cout << "\n";
}

int main() {
    fastio;
    solve();
}