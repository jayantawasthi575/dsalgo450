
class Solution{
  public:
    int minJumps(int arr[], int n){
        int jumps,maxrange,steps=0;
        maxrange=n-1;
        int i=0;
        while(i<=maxrange){
            jumps=arr[i];
            if(arr[0]==0)
            {
                i=1+maxrange;
                steps=-1;
                break;
            }else
            {
            if(i+jumps>maxrange|| i+jumps==maxrange)
            {   
                i=i+jumps;
                steps++;
                break;
            }
            else if(arr[i+jumps]>arr[i+1])
            {
            i=i+jumps;
            steps++;
            }
            else {
                if(i+jumps+arr[i+jumps]>maxrange || i+jumps+arr[i+jumps]==maxrange)
                {
            i=i+jumps;
            steps++;
                }
                else{
                i=i+1;
                steps++;
                }
            }
            }
            //cout<<arr[i]<<" ";
        }
        // cout<<"\n";
        // cout<<arr[47]<<" "<<arr[76+1];
        // cout<<"\n";
        
        return steps;
    }
};