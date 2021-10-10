class Solution {
  public:
    int findPosition(int N) {
        // code here
        if(N==0)
            return -1;
        if(((N)&(N-1))==0)
        {
            int c=0;
            while(N)
            {
                c++;
                N=N>>1;
            }
            return c;
        }
        else
        return -1;
    }
};