#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int minElements(int arr[],int n)
{
    int hs=0;
    for(int i=0;i<n;i++)
    hs=hs+arr[i];
    hs=hs/2;
    sort(arr,arr+n,greater<int>());
    int res=0,cs=0;
    for(int i=0;i<n;i++)
    {
        cs+=arr[i];
        res++;
        if(cs>hs)
        return res;
    }
    return res;
}
int main()
{
    int arr[]={3,1,7,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<minElements(arr,n)<<endl;
    return 0;
}