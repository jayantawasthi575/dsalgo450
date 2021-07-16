long long int maxSum(int arr[], int n)
{
    sort(arr,arr+n);
    long long sum=0;
    for (int i = 0; i < n/2; i++)
    {
        sum =sum-(2 * arr[i]);
        sum =sum+(2 * arr[n - i - 1]);
    }
    return sum;
}