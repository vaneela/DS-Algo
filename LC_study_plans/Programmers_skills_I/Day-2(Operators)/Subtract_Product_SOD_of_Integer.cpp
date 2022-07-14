class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        long long product=1;
        while(n){
            int rem=n%10;
            sum+=rem;
            product*= (long long)rem;
            n /= 10;
        }
        return product-sum;
    }
};