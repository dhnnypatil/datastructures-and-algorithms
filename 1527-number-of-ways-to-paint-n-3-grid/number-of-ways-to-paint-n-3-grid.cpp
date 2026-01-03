class Solution {
public:
    int numOfWays(int n) {
        long long mod = 1e9 + 7;
        
        // Base case for n = 1
        long long abc = 6;
        long long aba = 6;
        
        // Iterate from row 2 to n
        for (int i = 2; i <= n; i++){
            // Calculate new values based on the formulas derived above
            long long next_abc = (2 * abc + 2 * aba) % mod;
            long long next_aba = (2 * abc + 3 * aba) % mod;
            
            // Update states for the next iteration
            abc = next_abc;
            aba = next_aba;
        }
        
        return (abc + aba) % mod;
    }
};