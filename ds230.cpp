#include <bits/stdc++.h>
using namespace std;
int MaxSumDifference(int a[],int n)
{
    sort(a,a+n);
    int i=0,j=n-1,sum=0;
    vector<int> vec;
    while(j>i)
    {
        vec.push_back(a[i]);
        vec.push_back(a[j]);
        i++;
        j--;
    }
    for(int i=0;i<vec.size()-1;i++)
    {   
        //cout<<vec[i+1]<<" "<<vec[i]<<endl;
        sum=sum+abs(vec[i+1]-vec[i]);
    }
    sum=sum+abs(vec[n-1]-vec[0]);
    //cout<<endl;
    return sum;
}
int main()
{
    int a[] = { 1, 2, 4, 8 };
    int n = sizeof(a) / sizeof(a[0]);
    cout << MaxSumDifference(a, n) << endl;
}