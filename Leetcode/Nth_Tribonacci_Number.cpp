// Dp is not used so added so many base cases to avoid TLE
    int tribonacci(int n) {
        if(n==0)
            return 0;
        if(n==1 || n==2)
            return 1;
        if(n==3)
            return 2;
        if(n==4)
            return 4;
        if(n==5)
            return 7;
        if(n==6)
            return 13;
        if(n==7)
            return 24;
        if(n==8)
            return 44;
        if(n==9)
            return 81;
        if(n==10)
            return 149;
        return tribonacci(n-3)+tribonacci(n-1)+tribonacci(n-2); 
    }