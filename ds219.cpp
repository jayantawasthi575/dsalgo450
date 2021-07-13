class Solution{
public:
    string chooseandswap(string a){
        int check[26];
        int i,j;
        int n=a.length();
        for(i=0;i<26;i++)
        check[i]=-1;
        for(int i=0;i<n;i++)
        {
            if(check[a[i]-'a']==-1)
            check[a[i]-'a']=i;
        }
        for(i=0;i<n;i++)
        {
            bool flag=false;
            for(j=0;j<a[i]-'a';j++)
            {
                if (check[j] > check[a[i] - 'a']) {
                flag = true;
                break;
            }
            }
            if(flag)
            break;
        }
        if(i<n)
        {
            char ch1=a[i];
            char ch2=char(j+'a');
            for(i=0;i<n;i++)
            {
                if(a[i]==ch1)
                a[i]=ch2;
                else if(a[i]==ch2)
                a[i]=ch1;
            }
        }
        return a;
    }
    
};
