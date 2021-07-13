class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    static bool comp(Item a,Item b)
    {
         double r1=(double)a.value/(double)a.weight;
         double r2=(double)b.value/(double)b.weight;
         if(r1>r2)
         return true;
         else 
         return false;
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        sort(arr,arr+n,comp);
        double value=0.0;
        int cur=0;
        for(int i=0;i<n;i++)
        {
            if(cur+arr[i].weight<=W)
            {
                cur=cur+arr[i].weight;
                value=value+(double)arr[i].value;
            }
            else
            {
                int left=W-cur;
                double r1=(double)arr[i].value/(double)arr[i].weight;
                value=value+(double)left*r1;
                break;
            }
        }
        return value;
    }
        
};