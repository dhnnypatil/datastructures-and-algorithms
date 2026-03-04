class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int res = 0;

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(mat[i][j] == 1){
                    bool sp1 = true;
                    bool sp2 = true;
                    
                    for(int l=0; l<n; l++){
                        if(mat[i][l] == 1 && l != j){
                            sp1 = false;
                        }
                    }
                    for(int r=0; r<m; r++){
                        if(mat[r][j] == 1 && r != i){
                            sp2 = false;
                        }
                    }

                    if(sp1 && sp2){
                        res++;
                    }
                }
            }
        }

        return res;
    }
};