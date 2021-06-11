int romanToDecimal(string &str) {
 //int arr[]={1,5,10,50,100,500,1000};
 int k;
 int flag=0;
 int temp;
 int sum=0;
 for(int i=0;i<str.length();i++)
 {   
     if(str[i]=='I')
         k=1;
     else if(str[i]=='V')
         k=5;
     else if(str[i]=='X')
         k=10;
    else if(str[i]=='L')
        k=50;
     else if(str[i]=='C')
        k=100;
     else if(str[i]=='D')
       k=500;
      else if(str[i]=='M')
       k=1000;
     if(flag==0)
     {  //cout<<"run1"<<endl;
         temp=k;
         flag=1;
         sum=sum+k;
     }
     else{
         //cout<<"run2"<<endl;
         if(temp>=k)
          sum=sum+k;
         else
          {
              sum=sum-temp;
              sum=sum+k-temp;
          }
          temp=k;
     }
 }
 //cout<<sum<<endl;
 return sum;
}