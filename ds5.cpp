#include <iostream>
using namespace std;

int main() {
	int a[9]={12,11,-13,-5,6,-7,5,-3,-6};
	int i=0;
	int j=8;
	do{
	    while(a[i]<0){
	        i++;
	    }
	    while(a[j]>0){
	        j--;
	    }
	    cout<<"i "<<i<<" j "<<j<<"\n";
	    if(j>i)
	    {
	    int swap=a[i];
	    a[i]=a[j];
	    a[j]=swap;
	    }
	    
	}while(i<j);
	for(int k=0;k<9;k++)
	{
	    cout<<a[k] <<" ";
	}
}