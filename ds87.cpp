#include<bits/stdc++.h>
using namespace std;

int convert(string c,string d)
{    
    cout<<c<<endl;
    string temp1=c;
    string temp2=d;
    int i,j;
    int kk=0;
    sort(temp1.begin(),temp1.end());
    sort(temp2.begin(),temp2.end());
    if(temp1.length()!=temp2.length())
      return 0;
    for(i=0;i<temp1.length();i++)
    {
        if(temp1[i]!=temp2[i])
          return 0;
    }
    cout<<"now "<<endl;
    for(i=temp1.length()-1;i>=0;i--)
    {
        if(c[i]==d[i])
        {   
           // cout<<"there"<<endl;
            cout<<"there "<<i<<" "<<c<<endl;
            continue;
        }
        else{
            
            c.insert(c.begin(),c[i]);
            c.erase(i+1,1);
            cout<<"here "<<i<<" "<<c<<endl;
            kk++;
            i++;
        }
    }
    return kk;
}

int main(){
    string A = "EACBD";
    string B = "EABCD";
    cout<<convert(A,B);
    return 0;
}