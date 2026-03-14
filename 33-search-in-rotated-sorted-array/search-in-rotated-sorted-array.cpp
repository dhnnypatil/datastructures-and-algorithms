class Solution {
public:
    int search(vector<int>& nums, int target) {
        int k = 0;
        for(int i=1;i<nums.size();i++){
            if(nums[i] < nums[k])
                k = i;
        }

        int l = 0;
        int r = nums.size()-1;
        sort(nums.begin(), nums.end());
        while(l<=r){
            int mid = l + (r-l)/2;

            if(nums[mid] == target) return (mid+k)%nums.size();

            if(target <= nums[mid]){
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        return -1;
    }
};