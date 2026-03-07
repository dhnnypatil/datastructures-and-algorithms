class Solution {     
public:
    string frequencySort(string s) {
        //build the map
        unordered_map<char, int> freq;
        for(char c : s){
            freq[c]++;
        }

        //build the vector pairs to sort them in the decending order
        vector<pair<char,int>> v;
        for(auto &p : freq){
            v.push_back(p);
        }
        //custom lambda fn for sorting v<char, int>
        sort(v.begin(), v.end(), [](pair<char, int> a, pair<char, int> b){
            return a.second > b.second; 
        });

        //build the ans.
        string res = "";
        for(auto p : v){
            res += string(p.second, p.first);
        }

        return res;
    }
};