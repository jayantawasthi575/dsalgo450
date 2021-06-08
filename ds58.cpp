#include<iostream>

using namespace std;

int main(){
    int z=0,on=0,c=0;
    string str="0100110101";
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='0')
        {z++;}
        if(str[i]=='1')
        {
            on++;
        }
        if(z==on)
        {
            c++;
            z=0;on=0;
        }
    }
    cout<<"Total Number of strings are "<<c;
    return 0;
}