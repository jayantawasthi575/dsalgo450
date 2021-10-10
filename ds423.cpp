class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        if(n==0)
            return false;
        int val=n&(n-1);
        if(val==0)
            return true;
        else 
            return false;
    }
};