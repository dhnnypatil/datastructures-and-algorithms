class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> visited;

        while(visited.find(n) == visited.end()){
            visited.insert(n);
            n = getNextNumber(n);
            if(n==1){
                return true;
            }
        }

        return false;
    }

private: 
    int getNextNumber(int n){
        int out = 0;

        while(n>0){
            int digit = n%10;
            out += digit*digit;
            n = n/10;
        }

        return out;
    }
};