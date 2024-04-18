#include<iostream>

using namespace std;

 int max =0;

struct node
{
    int key;
    node *left;
    node *right;
    node(int k)
    {
        key= k;
        left = right= nullptr;
    }
};

void print_tree(node *root)  //  this is inorder printing left-mid-right
{
    if(root!=nullptr)
    {
        print_tree(root->left);
        cout<<root->key<<" ";
        print_tree(root->right);
    }
}

void find_max(node *root)
{
   if(root!=nullptr)
    {
        find_max(root->left);
        find_max(root->right);
        if(root->key > ::max)
        {
            ::max=root->key;
        }
    } 
}
void *insert(node *root,int term)
{
    node *temp= new node(term);
    node *parent=nullptr;
    while(root!=nullptr)
    {
         parent =root;

      if (term>root->key)
      {
          root=root->right;
      }
      else
      {
          root=root->left;    
      }
    }
    term>parent->key?parent->right=temp:parent->left=temp;

    return root;
}
int main()
{
    node *root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->right=new node(40);
    root->right->right=new node(50);

    print_tree(root);
    find_max(root);
    cout<<"\n"<<::max<<"\n";

    int x;
    cout<<"enter the term u want to insert: ";cin>>x;
    insert(root,x);
    print_tree(root);

    return(0);
}