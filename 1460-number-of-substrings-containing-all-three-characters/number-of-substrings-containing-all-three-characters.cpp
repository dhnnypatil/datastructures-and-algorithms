class Solution {
public:
    int numberOfSubstrings(string s) {
        int cnt=0;
        int l=0;
        unordered_map<char, int> ch_cnt = {{'a', 0}, {'b', 0}, {'c', 0}};

        for(int r=0; r<s.size(); r++){
            ch_cnt[s[r]]++;

            while(ch_cnt['a']>0 && ch_cnt['b']>0 && ch_cnt['c']>0){
                cnt += s.length() - r;
                ch_cnt[s[l]]--;
                l++;
            }
        }

        return cnt;
    }
};