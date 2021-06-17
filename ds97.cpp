class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here 
        set<int>hold;
        sort(arr,arr+n);
        int flag=0;
        int *res = new int(2);
        for(int i=0;i<n;i++)
        {
            if(hold.insert(arr[i]).second == true) {
                hold.insert(arr[i]);
            }
            else{
                res[0]=arr[i];
            }
        }
        int i=1;
        for(auto &pr:hold)
        { //cout<<pr<<" ";
        // cout<<endl;
           if(pr==i)
           {
               i++;
           }else{
               res[1]=i;
               flag=1;
               break;
           }
        }
        if(flag==1)
         return res;
         else
         { 
             res[1]=i;
             return res;
         }
    }
};