
class Solution{
public:
    int inSequence(int A, int B, int C){
        if(B==A)
        return 1;
        int temp=0;
        if(C!=0)
         temp=(B-A)/C+1;
        else
         temp=0;
        //cout<<temp<<endl;
        if(temp>0)
        {
        if((B==A+(temp-1)*C))
            return 1;
        else
        return 0;
        }else{
            return 0;
        }
    }
};
