class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size();
        int tail = 0;
        int head = -1;
        vector<int> store(n,INT_MAX);
        int ans = INT_MAX;
        int minLen = INT_MAX;
        int sum =0;

        while(tail<n){
            while(head+1<n && sum<target){
                head++;
                sum+=arr[head];
                if(head>0){
                    store[head]=store[head-1];
                }
            }

            if(sum==target){
                int len = head-tail+1;
                if(tail>0 && store[tail-1]!=INT_MAX){
                    ans = min(ans,len + store[tail-1]);
                }
                minLen = min(minLen, len);
                store[head]=minLen;
            }


            if(tail<=head){
                sum-=arr[tail];
                tail++;
            }else{
                tail++;
                head = tail-1;
            }
        }

        return ans == INT_MAX?-1:ans;
    }
};