class Solution {
public:
    string countAndSay(int n) {
       
        if(n==1)
       {
           return "1";
       }
        if(n==2)
        {
            return "11";
        }
        string alpha=countAndSay(n-1);
        char x=alpha[0];
        string temp;
        int k=1;
        for(int i=1;i<alpha.length();i++)
        {    
            //cout<<alpha[i]<<endl;
            if(x==alpha[i])
            {
                k++;   
            }else{
                
                temp.append(to_string(k)+x);
                k=1;
                //cout<<i<<" temp "<<temp<<" "<<x<<endl;
            }
            x=alpha[i];
        }    
       
          temp.append(to_string(k)+x);
        
       // cout<<alpha.size();
        //cout<<"temp "<<temp<<endl;
        return temp;
        
    }
};