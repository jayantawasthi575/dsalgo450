class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		    int table[str.length()+1][str.length()+1];
		    int i,j;
		    memset(table,0,sizeof(table));
		    for(i=1;i<str.length()+1;i++)
		    for(j=1;j<str.length()+1;j++)
		    {
		        if(str[i-1]==str[j-1]&&i!=j)
		        {
		            table[i][j]=1+table[i-1][j-1];
		        }
		        else{
		            table[i][j]=max(table[i-1][j],table[i][j-1]);
		        }
		    }
		  //  for(i=0;i<str.length()+1;i++)
		  //  {
		  //  for(j=0;j<str.length()+1;j++)
		  //      cout<<table[i][j]<<" ";
		  //  cout<<endl;
		        
		  //  }
		  int temp=table[str.length()][str.length()];
		    return temp;
		}
};