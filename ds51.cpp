#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1="ABCD";
    string s2="CDAM";
    string temp=s1+s1;
    if(s1.length()!=s2.length())
    {
       cout<<"No "<<s2<<" is not a rotation of "<<s1;
       exit(0); 
    }
    int pos=temp.find(s2);
    if(pos>0)
    {
        cout<<"Yes "<<s2<<" is a rotation of "<<s1;
    }
    else{
        cout<<"No "<<s2<<" is not a rotation of "<<s1;
    }
    return 0;
}