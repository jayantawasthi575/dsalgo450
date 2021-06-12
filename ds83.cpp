class Solution
{
    public:
    string smallestWindow (string s, string p)
    {    
        const int no_of_chars = 256;
        if(p.length()>s.length())
        {
            return "-1";
        }
        int hash_p[no_of_chars] = { 0 };
        int hash_s[no_of_chars] = { 0 };
        for (int i = 0; i < p.length(); i++)
             hash_p[p[i]]++;
        int start=0,sindex=-1,minlen=INT_MAX;
        int count=0;
        for (int i = 0; i < s.length(); i++)
        {       
                  hash_s[s[i]]++;
                  if(hash_s[s[i]]<=hash_p[s[i]])
                  count++;
                  if(count==p.length())
                  {
                      while(hash_s[s[start]]>hash_p[s[start]] || hash_p[s[start]] == 0)
                      {
                         
                        if (hash_s[s[start]]
                            > hash_p[s[start]])
                            hash_s[s[start]]--;
                        start++; 
                      }
                    int len_window = i - start + 1;
                    if (minlen > len_window) {
                        minlen = len_window;
                        sindex = start;
                    }
                  }
                   
        }
        if (sindex == -1) {
       // cout << "No such window exists";
        return "-1";
    }
 
    return s.substr(sindex, minlen);
    }
   
};