class Solution {
public:
    bool checkStrings(string s1, string s2) {
        map<int,int>mpp1;
        map<int,int>mpp2;
        map<int,int>mpp3;
        map<int,int>mpp4;
        for(int i=0;i<s1.size();i+=2){
            mpp1[s1[i]]++;
            mpp2[s2[i]]++;
        }
        for(int i=1;i<s1.size();i+=2){
            mpp3[s1[i]]++;
            mpp4[s2[i]]++;
        }
        return (mpp1==mpp2)&&(mpp3==mpp4);
        

    }
};