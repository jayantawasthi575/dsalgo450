class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {   
        string temp="";
        string pa;
        pa="";
       // cout<<"e "<<temp<<endl;
        for(int i=0;i<S.length();i++)
        {    
            if(pa==to_string(S[i])&&i!=0)
            {
                pa=to_string(S[i]);
               // cout<<"one "<<S[i]<<endl;
            }else{
                temp=temp+S[i];
                pa=to_string(S[i]);
               // cout<<"two "<<S[i]<<endl;
            }
        }
        return temp;
    }
};
