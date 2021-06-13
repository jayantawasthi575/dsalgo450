#include<bits/stdc++.h>
using namespace std;
int maxchars=256;
int runCustomerSimulation(int n,string str)
{
  int availablecomputer=n;
  int hashp[maxchars]={0};
  int hashn[maxchars]={0};
  int notget=0;
  string temp="";
  for(int i=0;i<str.length();i++)
  {
      if(hashp[str[i]]==1)
      {
          availablecomputer++;
          hashp[str[i]]--;
          if(temp.length()>0)
          {
            hashp[str[temp[0]]]++;  
            hashn[str[temp[0]]]--;
            temp.erase(0,1);
            notget--;
          }
      }else if(hashp[str[i]]==0)
      {   
          if(availablecomputer>0)
          {hashp[str[i]]++;
          availablecomputer--;}
          else{
            if(hashn[str[i]]==1)
            {
                hashn[str[i]]--;
                int n=temp.find(str[i]);
                temp.erase(n,1);                
            }
            else{
            hashn[str[i]]++;
            notget++;
            temp=temp+str[i];
            }
          }
      }
  }
  return notget;
}

int main(){
    cout << runCustomerSimulation(2, "ABBAJJKZKZ") << endl;
    cout << runCustomerSimulation(3, "GACCBDDBAGEE") << endl;
    cout << runCustomerSimulation(3, "GACCBGDDBAEE") << endl;
    cout << runCustomerSimulation(1, "ABCBCA") << endl;
    cout << runCustomerSimulation(1, "ABCBCADEED") << endl;
    return 0;
}