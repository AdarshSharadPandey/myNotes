   //UGLY NUMBER (POSITIVE WITH PRIME FACTORS NO OTHER THAN 2,3,5) 

    bool isUgly(int n) 
    {
        if(n<1) return false;
        while(n%2==0)
            n/=2;
        while(n%3==0)
            n/=3;
        while(n%5==0)
            n/=5;
        if(n>1) return false;
        return true;
    }