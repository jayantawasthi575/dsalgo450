class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            vector<int>elem;
            vector<int>elem1;
            int i=0,j=0;
            while(i<n1&&j<n2)
            {
                if(B[j]>A[i])
                {
                    i++;
                }else if(A[i]>B[j])
                {
                    j++;
                }else{
                    elem.push_back(A[i]);
                    i++;
                    j++;
                }
            }
            i=0,j=0;
            while(i<elem.size()&&j<n3)
            {
                if(C[j]>elem[i])
                {
                    i++;
                }else if(elem[i]>C[j])
                {
                    j++;
                }else{
                    elem1.push_back(elem[i]);
                    i++;
                    j++;
                }
            }
            elem1.erase( unique( elem1.begin(), elem1.end() ), elem1.end() );
            return elem1;
        }

};