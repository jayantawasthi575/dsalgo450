class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       int i,j,flag=1;
       string temp="";
       string ch;
        int min=strs[0].length();
       for(i=1;i<strs.size();i++)
       {
           if(min>strs[i].length())
               min=strs[i].length();
       }
        i=0;
       while(i<min)
       {   
           ch=strs[0][i];
           //cout<<"ch "<<ch<<endl;
           for(j=1;j<strs.size();j++)
           {    
               string tem="";
               tem=tem+strs[j][i];
                if(ch==tem)
                    flag=1;
                else 
                {
                    flag=0;
                   // cout<<strs[j][i]<<" "<<j<<endl;
                    break;
                }
           }
           if(flag==1)
               temp=temp+strs[0][i];
           else if(flag==0)
               break;
           i++;
           flag=0;
       }
        return temp;
    }
};