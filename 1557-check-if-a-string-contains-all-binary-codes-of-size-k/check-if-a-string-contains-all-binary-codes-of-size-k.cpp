class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n = s.length();
        if(n < k) return false;

        unordered_set<string> seen;
        int total = 1 << k; // 2^k

        for(int i = 0; i <= n - k; i++) {
            string sub = s.substr(i, k);
            seen.insert(sub);

            if(seen.size() == total)
                return true;
        }

        return seen.size() == total;
    }
};