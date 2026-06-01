class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int sum = 0;
        sort(nums.begin(), nums.end(), greater<>());

        for(int i=1; i<nums.size(); i+=2){
            sum += nums[i];
        }

        return sum;
    }
};