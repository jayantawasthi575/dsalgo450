class Solution {
public:
	vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
	  vector<vector<int>> final;
	  int count=0;
	  int k=0;
	  string temp="";
	  int l,m;
	  for(int i=0;i<grid.size();i++)
	  {
	      for(int j=0;j<grid[i].size();j++)
	      {
	          if(word[k]==grid[i][j])
	          {
	              temp=temp+word[k];
	              k++;
	              if(k==1)
	              {
	                l=i;
	                m=j;
	              }
	          }
	      }
	      if(temp==word)
	      {
	          vector<int> tem;
	          tem.push_back(l);
	          tem.push_back(m);
	          final.push_back(tem);
	      }
	      k=0;
	      temp="";
	  }
	  for(int i=0;i<grid.size();i++)
	  {
	      for(int j=grid[i].size()-1;j>=0;j--)
	      {
	          if(word[k]==grid[i][j])
	          {
	              temp=temp+word[k];
	              k++;
	              if(k==1)
	              {
	                l=i;
	                m=j;
	              }
	          }
	      }
	      if(temp==word)
	      {
	          vector<int> tem;
	          tem.push_back(l);
	          tem.push_back(m);
	          final.push_back(tem);
	      }
	      k=0;
	      temp="";
	  }
	 for(int i=0;i<grid.size();i++)
	  {
	      for(int j=0;j<grid[i].size();j++)
	      {   //cout<<"i "<<i<<" j "<<j<<" "<<word[k]<<" "<<grid[i][j]<<" "<<temp<<endl;
	          if(word[k]==grid[j][i])
	          {
	              temp=temp+word[k];
	              k++;
	              if(k==1)
	              {
	                l=j;
	                m=i;
	              }
	          }
	      }
	      if(temp==word)
	      {
	          vector<int> tem;
	          tem.push_back(l);
	          tem.push_back(m);
	          final.push_back(tem);
	      }
	      k=0;
	      temp="";
	  }
	  for(int i=0;i<grid.size();i++)
	  {
	      for(int j=grid[i].size()-1;j>=0;j--)
	      {
	          if(word[k]==grid[j][i])
	          {
	              temp=temp+word[k];
	              k++;
	              if(k==1)
	              {
	                l=j;
	                m=i;
	              }
	          }
	      }
	      if(temp==word)
	      {
	          vector<int> tem;
	          tem.push_back(l);
	          tem.push_back(m);
	          final.push_back(tem);
	      }
	      k=0;
	      temp="";
	  }
      for(int i=0;i<grid.size();i++)
	  {
	      for(int j=0;j<grid[i].size();j++)
	      { if(i==j)
	      { //cout<<"i "<<i<<" j "<<j<<" "<<word[k]<<" "<<grid[i][j]<<" "<<temp<<endl;
	          if(word[k]==grid[i][j])
	          {
	              temp=temp+word[k];
	              k++;
	              if(k==1)
	              {
	                l=i;
	                m=j;
	              }
	          }
	         // cout<<"hellyeah"<<endl;
	      }
	      }
	      if(temp==word)
	      {
	          vector<int> tem;
	          tem.push_back(l);
	          tem.push_back(m);
	          final.push_back(tem);
	      }
	      
	  }
	  temp="";
	  k=0;
	  for(int i=grid.size()-1;i>=0;i--)
	  {
	      for(int j=grid[i].size()-1;j>=0;j--)
	      { if(i==j)
	      { //cout<<"i "<<i<<" j "<<j<<" "<<word[k]<<" "<<grid[i][j]<<" "<<temp<<endl;
	          if(word[k]==grid[i][j])
	          {
	              temp=temp+word[k];
	              k++;
	              if(k==1)
	              {
	                l=i;
	                m=j;
	              }
	          }
	         // cout<<"hellyeah"<<endl;
	      }
	      }
	      if(temp==word)
	      {
	          vector<int> tem;
	          tem.push_back(l);
	          tem.push_back(m);
	          final.push_back(tem);
	      }
	      
	  }
	  temp="";
	  k=0;
// 	  for(int i=grid.size()-1;i>=0;i--)
// 	  {
// 	      for(int j=grid[i].size()-1;j>=0;j--)
// 	      { if(i==j)
// 	      { //cout<<"i "<<i<<" j "<<j<<" "<<word[k]<<" "<<grid[i][j]<<" "<<temp<<endl;
// 	          if(word[k]==grid[i][j])
// 	          {
// 	              temp=temp+word[k];
// 	              k++;
// 	              if(k==1)
// 	              {
// 	                l=i;
// 	                m=j;
// 	              }
// 	          }
// 	         // cout<<"hellyeah"<<endl;
// 	      }
// 	      }
// 	      if(temp==word)
// 	      {
// 	          vector<int> tem;
// 	          tem.push_back(l);
// 	          tem.push_back(m);
// 	          final.push_back(tem);
// 	      }
	      
// 	  }
// 	  temp="";
// 	  k=0;
	  
// 	  for(int i=0;i<final.size();i++)
// 	  {for(int j=0;j<final[i].size();j++)
// 	  {
// 	      cout<<final[i][j]<<" ";
// 	  }
// 	      cout<<endl;
// 	  }
	  return final;
	}
};