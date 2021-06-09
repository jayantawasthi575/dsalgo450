class Solution {
  public:
    int editDistance(string s, string t) {
      int table[1+s.length()][1+t.length()];
         int i=0,j=0;
         for( i=0;i<=s.length();i++)
         {
             for( j=0;j<=t.length();j++)
             {   
                 if(i==0)
                 {
                     table[0][j]=j;
                 }else if(j==0)
                 {
                     table[i][0]=i;
                 }
                  else if(s[i-1]==t[j-1])
                 {
                     table[i][j]=table[i-1][j-1];
                 }else{
                     table[i][j]=1+min({table[i-1][j-1],table[i-1][j],table[i][j-1]});
                 }
             }
         }
        //  for(i=0;i<=s.length();i++)
        //  {
        //  for(j=0;j<=t.length();j++)
        //  {
        //      cout<<table[i][j]<<"  ";
        //  }
        //  cout<<endl;
        //  }
         return table[s.length()][t.length()];
         //return 11;
       
    
    }
};
