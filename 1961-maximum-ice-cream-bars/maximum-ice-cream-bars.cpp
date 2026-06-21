class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n = costs.size();
        
        int maxVal = 0;
        for(int i = 0; i < n; i++) maxVal = max(maxVal, costs[i]);

        vector<int> hash(maxVal+1, 0);
        for(int i = 0; i < n; i++) hash[costs[i]]++;

        for(int i = 1; i <= maxVal; i++) hash[i] += hash[i-1];

        vector<int> sortedCosts(n);
        for (int i = n - 1; i >= 0; i--) {
            // Find the correct 0-indexed position and place the cost
            sortedCosts[hash[costs[i]] - 1] = costs[i];
            // Decrement the count so duplicate values go into the previous slot
            hash[costs[i]]--;
        }

        //Greedily buy ice cream using the fully sorted array
        int iceCreams = 0;
        for(int i = 0; i < n; i++){
            if(coins >= sortedCosts[i]){
                coins -= sortedCosts[i];
                iceCreams++;
            }else{
                // Stop if we can't afford the current cheapest ice cream
                break;
            }
        }
        
        return iceCreams;
    }
};