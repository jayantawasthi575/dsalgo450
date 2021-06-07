#include<bits/stdc++.h>
using namespace std;

int main(){
    map<char,int>m;
    string s="geeksforgeeks";
    for(int i=0;i<s.size();i++)
        m[s[i]]++;
    
    for(auto &pr:m)
    {
        if(pr.second>1)
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}