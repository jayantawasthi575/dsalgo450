#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<char, int>& a,pair<char, int>& b)
{
    return a.second < b.second;
}
void ssort(map<char, int>& M)
{
 vector<pair<char, int> > A;
    for (auto& it : M) {
        A.push_back(it);
    }
    sort(A.begin(), A.end(), cmp);
    for (auto& it : A) {
  
        cout << it.first << ' '
             << it.second << endl;
    }
}
bool areIsomorphic(string str1, string str2)
    {
        map<char,int> tstr1;
        map<char,int> tstr2;
        int i,j;
        for(int i=0;i<str1.length();i++)
            tstr1[str1[i]]++;
        for(int i=0;i<str2.length();i++)
            tstr2[str2[i]]++;
        ssort(tstr1);
        ssort(tstr2);
        vector<int>p1;
        vector<int>p2;
         for (auto pr: tstr1) {
            p1.push_back(pr.second);
    }
        for (auto pr: tstr2) {
            p2.push_back(pr.second);
    }
    if(p1.size()!=p2.size())
       return false;
    for(j=0;j<p1.size();j++)
    {
        if(p1[j]!=p2[j])
        {
            return false;
        }
    }
    return true;
    }

int main()
{
    cout<<areIsomorphic("aab","xxy");
    return 0;
}




soltn2:

class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
       int hash1[MAX_CHARS]={0};
       int hash2[MAX_CHARS]={0};
       if(str1.length()!=str2.length())
            return 0;
    int i,j;
    for(i=0;i<str1.length();i++)
    {
       hash1[str1[i]]++;
       hash2[str2[i]]++;
       if(hash1[str1[i]]!=hash2[str2[i]]) 
          return false;
        
    }
    return true;
    }
};