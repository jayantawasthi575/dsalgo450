#include<bits/stdc++.h>
using namespace std;

int main(){
    string m="abc";
    set<string> mm;
    for(int i=0;i<m.length();i++)
    {
     
    for(int j=0;j<m.length();j++)
    {
       mm.insert(m.substr(i,j+1));
    }
    }
    
    set<string>::iterator it;
    for (it=mm.begin(); it!=mm.end(); ++it)
    cout<< *it<<" ";
    return 0;
}