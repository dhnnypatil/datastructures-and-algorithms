class Solution {
public:
    int maxDistance(vector<int>& colors) {
    int n = colors.size();
    int first = colors[0];
    int last = colors[n-1];
    int d1 =0;
    int d2 =0 ;
    for(int i=n-1; i>=0; i--){
    if(colors[i] != first){
    d1 = i;
    break;
    }
    }
    for(int i=0; i<n; i++){
    if(colors[i] != last){
    d2 = (n-1) -i;
    break;
    }
    }
    return max(d1,d2);
    }
};