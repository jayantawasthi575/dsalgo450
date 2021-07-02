char* reverse(char *S, int len)
{   
    int top=len-1;
    char L[len];
    for(int i=0;i<len;i++)
    {
        L[i]=S[i];
    }
    for(int i=0;i<len;i++)
    {
        S[i]=L[top];
        top--;
    }
    return S;
    // i=0;
    // while(top>=0)
    // {
    //     S[top]=L[i];
    //     top--;
    //     i++;
    // }
}