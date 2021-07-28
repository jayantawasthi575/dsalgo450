#include <bits/stdc++.h>
using namespace std;
const int MAX_CHAR = 26;
 
struct Key {
    int freq; 
    char ch;
    bool operator<(const Key& k) const
    {
         bool j=freq < k.freq;
         return j; 
    }
};
class Solution
{
    public:
    bool rearrangeString(string str)
    {
        int n=str.length();
        int count[MAX_CHAR]={0};
        for(int i=0;i<n;i++)
            count[str[i]-'a']++;
        priority_queue<Key> pq;
        for (char c = 'a' ; c <= 'z' ; c++)
            if (count[c-'a']) 
              pq.push( Key { count[c-'a'], c} ); 
        Key prev{ -1, '#' };
        string ans="";
        while(!pq.empty())
        {
        Key k = pq.top();
        pq.pop();
        ans= ans + k.ch;
        if (prev.freq > 0)
            pq.push(prev);
        (k.freq)--;
        prev = k;
        }
        if (n != ans.length())
            cout<<ans<<0;
     
        else
            cout<<ans<<1;
    }
    
};
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	   // cout<<str;
	    Solution ob;
	    bool str1=ob.rearrangeString(str);
	    cout<<endl;
	}
	return 0;
}