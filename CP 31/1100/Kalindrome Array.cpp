#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int i = 0, j = n - 1;
    while(i < j) {
        if (arr[i] != arr[j]) {
            break;
        }
        i++;
        j--;
    }

    if (i >= j) {
        cout << "YES\n";
        return;
    }

    vector<int> candidates = {arr[i], arr[j]};
    
    for (int target : candidates) {
        int l = i, r = j;
        bool possible = true;

        while (l < r) {
            if (arr[l] == arr[r]) {
                l++;
                r--;
            }
            else if (arr[l] == target) {
                l++;
            }
            else if (arr[r] == target) {
                r--;
            }
            else {
                possible = false;
                break;
            }
        }

        if (possible) {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
}

int main() {
    fastio;
    int T; cin >> T;
    while(T--) {
        solve();
    }
}