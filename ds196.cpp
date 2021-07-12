int minValue(Node* root)
{
     if(root->left==NULL)
     return root->data;
     else
     {
         int data=minValue(root->left);
         return data;
     }
}