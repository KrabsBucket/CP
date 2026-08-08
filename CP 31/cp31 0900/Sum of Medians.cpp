#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        int n, k;
        std::cin >> n >> k;
        std::vector<long long> a(n * k);
        for (int i = 0; i < n * k; ++i) {
            std::cin >> a[i];
        }

        long long max_median_sum = 0;
        int jump = n - (n - 1) / 2;
        int current_pos = n * k - jump;

        for (int i = 0; i < k; ++i) {
            max_median_sum += a[current_pos];
            current_pos -= jump;
        }

        std::cout << max_median_sum << "\n";
    }
    return 0;
}