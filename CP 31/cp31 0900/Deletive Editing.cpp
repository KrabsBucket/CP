#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        bool flag = false;
        vector<int> count;
        unordered_map<char, vector<int>> pos;
        for (int i = 0; i < (int)s.size(); i++) {
            pos[s[i]].push_back(i);
        }

        unordered_map<char, int> tos;
        for (int i = 0; i < (int)t.size(); i++) {
            tos[t[i]]++;
        }

        for (int i = 0; i < (int)t.size(); i++) {
            if (pos.find(t[i]) != pos.end()) {
                int idx = (int)pos[t[i]].size() - tos[t[i]];
                if (idx < 0 || idx >= (int)pos[t[i]].size()) {
                    flag = true;
                    break;
                }
                int maxpos = pos[t[i]][idx];
                count.push_back(maxpos);
                tos[t[i]]--;
            } else {
                flag = true;
                break;
            }
        }

        for (int i = 1; i < (int)count.size(); i++) {
            if (count[i] <= count[i - 1]) {
                flag = true;
                break;
            }
        }

        if (flag) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}
