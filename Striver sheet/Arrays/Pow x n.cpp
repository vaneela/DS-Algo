class Solution {
    double sol(double x, int n){
        if(n ==0)
            return 1;
        if(n ==1)
            return x;
        double ans = sol(x,n/2);
        if(n %2)
            return ans*ans*x;
        else
            return ans*ans;
    }
public:
    double myPow(double x, int n) {
        if(n <0){
            return 1/sol(x,abs(n));
        }
        return sol(x,n);
    }
};