Node* predeccesor(Node* current)
{
    while(current!=NULL && current->left!=NULL)
    {   
        current=current->left;
    }
    return current;
}
void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{ 
  if(root==NULL)
  {
      //cout<<-1<<-1;
      return;
  }
  if(root->key>key)
  {    
      suc=root;
      findPreSuc(root->left,pre,suc,key);
      return;
  }
  else if(root->key<key)
  {    
      pre=root;
      findPreSuc(root->right,pre,suc,key);
      return;
  }
  else
  {   
      if (root->left != NULL) {
            Node* t = root->left;
            while (t->right !=NULL) {
                t = t->right;
            }
            pre = t;
      }
      if (root->right != NULL) {
            Node* t = root->right;
            while (t->left != NULL) {
                t = t->left;
            }
            suc = t;
      }
        return;
  }
  //cout<<pre->key<<suc->key;
}