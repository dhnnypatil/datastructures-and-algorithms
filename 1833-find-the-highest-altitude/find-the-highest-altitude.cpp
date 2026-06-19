class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int currAlt = 0;
        int highestAlt = currAlt;

        for(int altGain : gain){
            currAlt += altGain;
            highestAlt = max(highestAlt, currAlt);
        }

        return highestAlt;
    }
};