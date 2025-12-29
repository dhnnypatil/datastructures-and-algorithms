class Solution {
public:
    unordered_map<string, bool> t;

    bool solve(string curr, unordered_map<string, vector<char>>& mp, int idx, string above){
        //at the top
        if(curr.length() == 1) return true; 

        string key = curr + "-" + to_string(idx) + "-" + above;
        if(t.count(key)) return t[key];

        //moving to next layer
        if(idx == curr.length()-1) return t[key] = solve(above, mp, 0, "");

        string p = curr.substr(idx, 2);
        if(mp.find(p) == mp.end()) return t[key] =  false;

        //backtracking
        for(char &ch : mp[p]){
            above.push_back(ch); //do
            if(solve(curr, mp, idx+1, above) == true) return t[key] = true; //explore
            above.pop_back(); //undo
        }

        return t[key] = false;
    }

    bool pyramidTransition(string bottom, vector<string>& allowed) {
        unordered_map<string, vector<char>> mp;

        for(auto& pattern : allowed){
            mp[pattern.substr(0,2)].push_back(pattern[2]);
        }

        return solve(bottom, mp, 0, "");     
    }
};