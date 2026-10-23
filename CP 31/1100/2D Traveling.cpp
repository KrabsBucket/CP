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
        long long n, k , a, b;
        cin >> n >> k >> a >> b;

        vector<pair<long long, long long>> points(n);
        vector<pair<long long, long long>> major(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> points[i].first >> points[i].second;
            if (i < k)
            {
                major[i] = points[i];
            }
        }
        long long intial_x, intial_y;
        intial_x = points[a-1].first;
        intial_y = points[a-1].second;

        long long final_x, final_y;   
        final_x = points[b-1].first;   
        final_y = points[b-1].second;

        long long min_temp_distance1 = LLONG_MAX;
        long long min_temp_distance2 = LLONG_MAX;
        long long distance = abs(intial_x - final_x) + abs(intial_y - final_y);
        for (long long i = 0; i < k; i++)
        {
            long long temp_distance_major1 = abs(intial_x - major[i].first) + abs(intial_y - major[i].second) ;
            min_temp_distance1 = min(min_temp_distance1, temp_distance_major1);


            long long temp_distance_major2 = abs(final_x - major[i].first) + abs(final_y - major[i].second);
            min_temp_distance2 = min(min_temp_distance2, temp_distance_major2);
        }
        if (k != 0)
            min_temp_distance1 += min_temp_distance2;

        distance = min(distance, min_temp_distance1);

        cout << distance << "\n";




    }



}
