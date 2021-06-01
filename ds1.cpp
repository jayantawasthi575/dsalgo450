#include <iostream>
using namespace std;

int main() {
 int arr[5]={2,4,6,7,8};
 int k=4;
 for(int i=0;i<2;i++)
 {
 int temp=arr[i];
 arr[i]=arr[k];
 arr[k]=temp;
 k--;
 }
 for(int m = 0; m < 5; m++) {
  cout << arr[m] << "\n";
}
}