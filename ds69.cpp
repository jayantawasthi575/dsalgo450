#include<iostream>
using namespace std;
int count=0;
void findlrrl(string input[],string needle)
{   
    int size= 6 ;
    int k=0;
    string temp="";
    for(int i=0;i<size;i++)
   {
    for(int j=0;j<input[i].length();j++)
    {   
        //cout<<"Processing1"<<endl;
        cout<<i<<" "<<j<<endl;
        if(needle[k]==input[i][j])
        {
            temp=temp+needle[k];
            k++;
        }
    }
    cout<<"temp "<<temp<<endl;
    if(needle==temp)
    {
        count=count+1;
    }
    temp="";
    k=0;
   }
}
void findrlrl(string input[],string needle)
{   
    int size= 6;
    int k=0;
    string temp="";
    for(int i=0;i<size;i++)
    {
    for(int j=input[i].length()-1;j>=0;j--)
    {   
       //cout<<"Processing2"<<endl;
       cout<<i<<" "<<j<<endl;
        if(needle[k]==input[i][j])
        {    
            temp=temp+needle[k];
            k++;
        }
    }
    cout<<"temp "<<temp<<endl;
    if(needle==temp)
    {
        count=count+1;
    }
    temp="";
    k=0;
    }
}
void t2d(string input[],string needle)
{   
    int size= 6 ;
    int k=0;
    string temp="";
    for(int i=0;i<size;i++)
    {
    for(int j=0;j<input[i].length();j++)
    {    
        //cout<<"Processing3"<<endl;
        cout<<j<<" "<<i<<endl;
        if(needle[k]==input[j][i])
        {
            temp=temp+needle[k];
            k++;
        }
    }
    cout<<"temp "<<temp<<endl;
    if(needle==temp)
    {
        count=count+1;
    }
    temp="";
    k=0;
    }
}
void d2t(string input[],string needle)
{   
    int size= 6;
    int k=0;
    string temp="";
    for(int i=0;i<size;i++)
    {
    for(int j=input[i].length()-1;j>=0;j--)
    {    
        //cout<<"Processing4"<<endl;  
        cout<<j<<" "<<i<<endl;
        if(needle[k]==input[j][i])
        {
            temp=temp+needle[k];
            k++;
        }
    }
    cout<<"temp "<<temp<<endl;
    if(needle==temp)
    {
        count=count+1;
    }
    temp="";
    k=0;
    }
}
int main(){
   string input[6] = { "BBABBM",
                       "CBMBBA",
                       "IBABBG",
                       "GOZBBI",
                       "ABBBBC",
                       "MCIGAM" };
    string needle = "MAGIC";
    findlrrl(input,needle);
    findrlrl(input,needle);
    t2d(input,needle);
    d2t(input,needle);
    cout<<endl<<endl<<endl;
    cout<<"count "<<count<<" ";
}