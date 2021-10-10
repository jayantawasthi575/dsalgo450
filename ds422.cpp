class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
        int N=a^b;
        int count=0;
        while(N)
        {
            int bit=N&1;
            if(bit)
                count++;
            N=N>>1;
        }
        return count;
        
    }
};