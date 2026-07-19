class Solution {
public:
    vector<vector<int>> filterOccupiedIntervals(vector<vector<int>>& occupiedIntervals, int freeStart, int freeEnd) {
        sort(occupiedIntervals.begin(), occupiedIntervals.end());

        int i = 0;
        int k = 1;
        while (k < occupiedIntervals.size())
        {
            if (occupiedIntervals[i][1] + 1 >= occupiedIntervals[k][0])
            {
                occupiedIntervals[i][1] = max(occupiedIntervals[i][1], occupiedIntervals[k][1]);
                occupiedIntervals.erase(occupiedIntervals.begin()+k);
            }
            else
            {
                i++;
                k++;
            }

        }
        for(int i = occupiedIntervals.size() -1 ; i >= 0; i--)
        {
            int s = occupiedIntervals[i][0];
            int e = occupiedIntervals[i][1];
            if (s >= freeStart && e <= freeEnd)
            {
                occupiedIntervals.erase(occupiedIntervals.begin()+i);

            }

            else if(s < freeStart && e > freeEnd)
            {
                occupiedIntervals[i][1] = freeStart-1;
                occupiedIntervals.insert(occupiedIntervals.begin() + i + 1, {freeEnd + 1, e});
            }
            else if (e >= freeStart && s < freeStart) {
                occupiedIntervals[i][1] = freeStart - 1;
            }
            else if (e > freeEnd && s <= freeEnd) {
                occupiedIntervals[i][0] = freeEnd + 1;
            }

        }
        return occupiedIntervals;
        
    }
};
