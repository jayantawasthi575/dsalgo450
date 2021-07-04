#include<bits/stdc++.h>
using namespace std;
int SumOfKsubArray(int arr[] , int n , int k)
{
    int sum=0;
    deque<int>l1,l2;
    int i;
    for(i=0;i<k;i++)
    {
        while((!l1.empty()) && arr[l1.back()]>=arr[i])
        {
            l1.pop_back();
        }
        while((!l2.empty()) && arr[l2.back()]<=arr[i])
        {
            l2.pop_back();
        }
        l1.push_back(i);
        l2.push_back(i);
    }
    for(;i<n;i++)
    {
        sum=sum+arr[l1.front()]+arr[l2.front()];
        while(!l1.empty() && l1.front()<=i-k)
        l1.pop_front();
        while(!l2.empty() && l2.front()<=i-k)
        l2.pop_front();
        while((!l1.empty()) && arr[l1.back()]>=arr[i])
        {
            l1.pop_back();
        }
        while((!l2.empty()) && arr[l2.back()]<=arr[i])
        {
            l2.pop_back();
        }
        l1.push_back(i);
        l2.push_back(i);
    }
    sum=sum+arr[l1.front()]+arr[l2.front()];
    return sum;
}
int main()
{
    int arr[] = {2, 5, -1, 7, -3, -1, -2} ;
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    cout << SumOfKsubArray(arr, n, k) ;
    return 0;
}