#include <iostream>
using namespace std;

int main() {
  int arr[5]={0,1,4,3,2};
  int min=arr[0];
  int max=arr[0];
  int size=sizeof(arr)/sizeof(arr[0]);
  for(int i=1;i<size-1;i++)
  {
  if(min>arr[i])
  {
  min=arr[i];
  }
  if(max<arr[i])
  {
  max=arr[i];
  }
  }
  cout<<"Minimum Number is "<<min<<"\n";
  cout<<"Maximum Number is "<<max;
  return 0;
}