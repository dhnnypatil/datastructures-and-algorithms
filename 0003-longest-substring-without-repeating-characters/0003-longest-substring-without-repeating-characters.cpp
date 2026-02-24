class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int m = 0;
        int l = 0;
        unordered_map<char, int> dict;

        for(int r=0; r<s.length(); r++){
            char c = s[r];
            if(dict.find(c) != dict.end() && dict[c] >= l){
                l = dict[c] + 1;
            }
            m = max(m, r - l + 1);
            dict[c] = r;
        }

        return m;        
    }
};