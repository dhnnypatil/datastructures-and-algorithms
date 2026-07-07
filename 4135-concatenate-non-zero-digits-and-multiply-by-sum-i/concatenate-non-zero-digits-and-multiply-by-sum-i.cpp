class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x = 0;
        long long multiplier = 1;
        long long sum = 0;

        while(n > 0){
            int temp = n % 10;
            if(temp > 0){
                x += (temp*multiplier);
                sum += temp;
                multiplier *= 10;
            }
            n /= 10;
        }
        return x * sum;
    }
};