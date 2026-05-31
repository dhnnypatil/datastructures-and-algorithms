class Solution {
public:
    vector<vector<int>> ans;

    void solve(vector<int> nums, vector<int> res){
        if(nums.size() == 0){
            ans.push_back(res);
            return;
        }

        vector<int> v1 = res;
        vector<int> v2 = res;

        v2.push_back(nums.back());
        nums.pop_back();

        solve(nums, v1);
        solve(nums, v2);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> res;
        solve(nums, res);
        return ans;
    }
};