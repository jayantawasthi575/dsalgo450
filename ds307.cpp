class Solution {
	public:
	const int MAX_CHAR = 26;
		string FirstNonRepeating(string A){
		    // Code here
		    queue<char>q;
		    int charCount[MAX_CHAR]={0};
		    string b="";
		    for(int i=0;i<A.length();i++)
		    {
		        q.push(A[i]);
		        charCount[A[i]-'a']++;
		        while(!q.empty())
		        {
		            if(charCount[q.front()-'a']>1)
		            q.pop();
		            else
		            {
		             b=b+q.front();   
		             break;
		            }
		        }
		        if (q.empty())
                    b=b+"#";
		    }
		    return b;
		}

};