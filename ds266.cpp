#include <bits/stdc++.h>
using namespace std;
int kthSmallest(int arr[], int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> gquiz;
    int i;
	for(i=0;i<n;i++)
	    gquiz.push(arr[i]);
    i=0;  
    int m=0;
    while(i<k)
    {   
        m=gquiz.top();
        gquiz.pop();
        i++;
    }
    return m;
}
int main()
{
    int arr[] = { 12, 3, 5, 7, 19 };
    int n = sizeof(arr) / sizeof(arr[0]), k = 4;
    cout << "K'th smallest element is " << kthSmallest(arr, n, k);
    return 0;
}