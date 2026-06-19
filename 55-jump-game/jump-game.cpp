class Solution {
public:
    bool canJump(vector<int>& nums) {
        int currIdx  = 0;
        int maxIdx = currIdx;
        
        for(int i = 0; i < nums.size(); i++){
            if(i > maxIdx){
                return false;
            }
            currIdx = i;
            maxIdx = max(maxIdx, currIdx + nums[i]);
        }

        return true;
    }
};