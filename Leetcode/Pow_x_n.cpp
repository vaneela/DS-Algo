 double p(double x,int n){
         if(n==0)
             return 1;
        if(n==1)
            return x;
        double ans =p(x,n/2);
        if(n%2==0)
            return ans*ans;
        else
            return x*ans*ans;
    }
    double myPow(double x, int n) {
        if(n<0){
            return 1/p(x,abs(n));
        }
        return p(x,n);
    }