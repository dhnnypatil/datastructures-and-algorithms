class Solution {
public:
    string processStr(string s) {
        string res;
        int n = s.length();

        for(int i = 0; i < n; i++){
            char c = s[i];

            if(c == '*'){
                if(res.length() != 0){
                    res.pop_back();
                }
            }else if(c == '#'){
                res += res;
            }else if(c == '%'){
                reverse(res.begin(), res.end());
            }else if(c >= 'a' && c <= 'z'){
                res.push_back(c);
            }
        }

        return res;
    }
};