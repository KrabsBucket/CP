class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits,
                             vector<int>& capital) {

        int b = w;
        vector<pair<int, int>> main(profits.size());

        for (int i = 0; i < profits.size(); i++) {
            main[i] = {capital[i], profits[i]};
        }

        sort(main.begin(), main.end());
        priority_queue<int> pq;
        int idx = 0;
        for (int i = 0; i < k; i++) {
            while (idx < profits.size() && main[idx].first <= b) {
                pq.push(main[idx].second);
                idx++;
            }

            if (!pq.empty()) {

                b += pq.top();
                pq.pop();
            }
        }

        return b;
    }
};
