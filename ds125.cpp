#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout<<endl;
}

void shellsort(int arr[], int n)
{
    // for(int gap=n/2;gap>=1;gap/=2)
    // {
    //     for(int j=gap;j<n;j++)
    //     {
    //         for(int i=j-gap;i>=0;i=-gap)
    //         {
    //             if(arr[i+gap]>arr[i])
    //             {
    //                 break;
    //             }
    //             else{
    //                 int temp=arr[i+gap];
    //                 arr[i+gap]=arr[i];
    //                 arr[i]=temp;
    //             }
    //         }
    //     }
    // }
    for (int gap = n / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < n; i += 1)
        {
            int temp = arr[i];
            int j;
            // for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
            //     arr[j] = arr[j - gap];
            j=i;
            while(j>=gap)
            {   
                if(arr[j-gap]>temp)
                {
                arr[j]=arr[j-gap];
                j=j-gap;
                }
                else{
                    break;
                }
            }
            arr[j] = temp;
        }
    }
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7 }, i;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Array before sorting: \n"; 
    printArray(arr, n);
    shellsort(arr, n);
    cout << endl;
    printArray(arr, n);
    return 0;
}
