class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n =  nums.size();
        vector<int> hash(10001, 0);

        for(int i : nums){
            hash[i]++;
            if(hash[i] == n/2) return i; 
        }

        return 0;
    }
};