class Solution{
    public:
    int preIndex=0;
    int search(int arr[], int strt, int end, int value)
    {
        int i;
        for (i = strt; i <= end; i++)
        {
            if (arr[i] == value)
                return i;
        }
    }
    Node* construct(int inStart,int inEnd,int in[],int pre[])
    {   
       // preIndex=0;
        if(inStart>inEnd)
        return NULL;
        Node* node=new Node(pre[preIndex++]);
       // ++preIndex;
        if (inStart==inEnd)
          return node;
        //int inIndex=m[node->data];
        int inIndex=search(in, inStart, inEnd, node->data);
        node->left=construct(inStart,inIndex-1,in,pre);
        node->right=construct(inIndex+1,inEnd,in,pre);
        return node;
    }
    Node* buildTree(int in[],int pre[], int n)
    {   
        // unordered_map<char,int> map;
        // for(int i=0;i<n;i++)
        // {
        //     map[in[i]]=i;
        // }
       // Node* tobesend=construct(0,n-1,in,pre);
       // return tobesend;
        //preIndex=0;
        return construct(0,n-1,in,pre);
    }
};