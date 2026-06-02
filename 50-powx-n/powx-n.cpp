class Solution {
private: 
    double pow(double x, long long n){
        if(n == 0) return 1.0;

        if(n == 1.0) return x;

        if(n%2 == 0){
            return pow(x*x, n/2);
        }
        return x*pow(x, n-1);
    }
public:
    double myPow(double x, int n) {
        long long num = n;

        if(n<0){
            return (1.0/pow(x, -num));
        }

        return pow(x, num);
    }
};