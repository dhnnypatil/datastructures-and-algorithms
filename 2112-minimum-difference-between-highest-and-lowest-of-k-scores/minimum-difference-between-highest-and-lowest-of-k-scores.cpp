class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if (k == 1) return 0;

        sort(nums.begin(), nums.end());

        int m = INT_MAX;
        for(int i=0; i<=nums.size()-k; i++){
            int curr_diff = nums[i + k - 1] - nums[i];
            m = min(m, curr_diff);
        }
        return m;
    }
};