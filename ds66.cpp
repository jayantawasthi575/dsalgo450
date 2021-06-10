#include<bits/stdc++.h>
using  namespace std;

int main()
{
int arr[27]={2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
string temp="JAYANTAWASTHI";
int numb[temp.length()];
for(int i=0;i<temp.length();i++)
{
 numb[i]=arr[temp[i]-'A'];
 cout<<numb[i];
}
return 0;
}