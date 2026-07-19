class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n = nums.size();

        int maxp = INT_MIN;
        int maxs = -1;
        for(int i = k; i < n; i++)
        {
            maxp = max(maxp, nums[i-k]);

            maxs = max(maxs, maxp+nums[i]);

        }
        
        return maxs;
    }
};
