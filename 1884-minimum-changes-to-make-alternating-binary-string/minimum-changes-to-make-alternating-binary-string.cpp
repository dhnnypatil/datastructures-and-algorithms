class Solution {
public:
    int minOperations(string s) {
        int cnt = 0;
        char flag = s[0];
        int n = s.size();

        for(int i=1; i<n; i++){
            if(i%2 != 0 && s[i] == flag){
                cnt++;
            }else if(i%2 == 0 && s[i] != flag){
                cnt++;
            }
        }

        return min(cnt, n-cnt);
    }
};