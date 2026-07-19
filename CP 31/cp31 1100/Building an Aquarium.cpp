#include <bits/stdc++.h>
using namespace std;


int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);



    long long T;
    cin>> T;
    while (T--)
    {
        long long n, x;
        cin >> n >> x;

        unordered_map<long long, long long> block_count;
        set<long long> unique_blocks;

        for (long long i = 0; i < n; i++)
        {
            long long block;
            cin >> block;
            block_count[block]++;
            unique_blocks.insert(block);
        }

        vector<long long> unique_blocks_vec(unique_blocks.begin(), unique_blocks.end());
        long long water = LLONG_MAX;
        long long water_level;
        long long s = unique_blocks_vec.size();
        long long cal1 = x;
        long long cal2 = 0;
        for (long long i = 0; i < s ; i++)
        {
            
            cal1 += unique_blocks_vec[i] * block_count[unique_blocks_vec[i]];
            cal2 += block_count[unique_blocks_vec[i]];
            water_level = cal1 / cal2;
            water = min(water, water_level);

        }
        

        cout << water << "\n";

    }



}