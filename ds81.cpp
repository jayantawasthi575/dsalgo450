#include<bits/stdc++.h>
using namespace std;

int main(){
    string str="ABC";
    string temp="";
    int k=str.length();
    string tt=str.substr(0,k);
    string ttt="";
    while(k>0)
    {
    
    for(int i=0;i<k;i++)
    {
        temp.push_back(str[k-i-1]);
    }
    if(temp==tt)
    {   
        ttt=str.substr(k,str.length());
        reverse(ttt.begin(), ttt.end());
        //cout<<" "<<1<<" "<<ttt;
        break;
    }
   // cout<<endl<<tt<<endl;
    k--;
    tt=str.substr(0,k);
    temp="";
    }
    //cout<<"break "<<ttt;
    cout<<"old string "<<str<<endl;
    str.insert(0,ttt);
    cout<<"New String "<<str;
    return 0;
}