#include <bits/stdc++.h>
using namespace std;
long long int findMinSum(long long int a[],long long int b[],int n)
{
    sort(a,a+n);
    sort(b,b+n);
    long long int sum=0;
    for(int i=0;i<n;i++)
        sum=sum+abs(b[i]-a[i]);
    return sum;
}
int main()
{
    long long int a[] = {4, 1, 8, 7};
    long long int b[] = {2, 3, 6, 5};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<findMinSum(a,b,n);
    return 0;
}