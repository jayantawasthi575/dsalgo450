class Solution{
  public:
    int majorityElement(int a[], int size)
    {
      sort(a,a+size);
    int count=0;
    int temp=a[0];
    for(int i=1;i<size;i++)
    {
        if(temp==a[i])
        {
            count++;
            temp=a[i];
        }else{
            if(count>=(size/2))
              return temp;
             else{
                 temp=a[i];
                 count=0;
             }
        }
    }
    if(count>=(size/2))
    return temp;
    else
    return -1;
    }
};