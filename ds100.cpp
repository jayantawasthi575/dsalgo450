bool findPair(int arr[], int size, int n){
  sort(arr,arr+size);
  int i=0;
  int j=1;
  while(j<size)
  {
      if((arr[j]-arr[i]==n))
      return true;
      else if(arr[j]-arr[i]<n)
      j++;
      else if(arr[j]-arr[i]>n)
      i++;
  }
  return false;
}