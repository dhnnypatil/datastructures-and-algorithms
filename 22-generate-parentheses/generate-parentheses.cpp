class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<vector<string>> dp(n+1);
        dp[0] = {""};

        for(int k=1; k<=n; k++){
            for(int i=0; i<k; i++){
                int j = k-1-i;
                for(string inside : dp[i]){
                    for(string outside : dp[j]){
                        dp[k].push_back("(" + inside + ")" + outside);
                    }
                }
            }
        }

        return dp[n];
    }
};