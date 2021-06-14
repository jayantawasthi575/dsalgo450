class Solution {
  public:
    int countSquares(int N) {
      int result=sqrt(N);
      int count=0;
      int square;
      for(int i=1;i<=result;i++)
      {
          square=i*i;
          if(N>square)
          count=count+1;
      }
      return count;
    }
};