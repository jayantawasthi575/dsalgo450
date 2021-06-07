class Solution {
  public:
    string longestPalin (string S) {
     bool table[S.size()][S.size()];
     memset(table,0,sizeof(table));
     int start=0;
     int max=1;
     for(int i=0;i<S.size();i++)
     table[i][i]=1;
     int lll=0;
     for(int k=0;k<S.size()-1;k++)
     {
         if(S[k]==S[k+1])
         {
           table[k][k+1]=1;
           if(lll==0)
           {start=k;
           max=2;
           lll=1;
           }
         }
     }
    //  for(int m=0;m<S.size();m++)
    //  {for(int l=0;l<S.size();l++)
    //  //cout<<table[m][l]<<" ";
    // // cout<<endl;
    //  }
     for(int al=3;al<=S.size();al++)
     {
         for(int all=0;all<S.size()-al+1;all++)
         {
             int alll=all+al-1;
             if(S[all]==S[alll]&&table[all+1][alll-1]==1)
              {table[all][alll] = 1;
                 if(al>max){
                     start=all;
                     max=al;
                 }
         }}
     }
    //   for(int m=0;m<S.size();m++)
    //  {for(int l=0;l<S.size();l++)
    //  cout<<table[m][l]<<" ";
    //  cout<<endl;
    //  }
     //cout<<start;
    //cout<<max;
    if(start!=0||max!=1)
    return S.substr(start,max);
    else 
    return S.substr(0,1);
    }
};