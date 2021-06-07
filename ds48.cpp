class Solution{
public:	
	
	
	int isPlaindrome(string S)
	{
	    string temp;
	    for(int i=0;i<S.length();i++)
	    {
	        temp.push_back(S[S.length()-i-1]);
	    }
	    if(temp==S)
	    {
	        return 1;
	    }else{
	        return 0;
	    }
	}

};
