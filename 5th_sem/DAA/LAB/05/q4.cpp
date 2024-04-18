#include <iostream> 
using namespace std; 
  
class listNode  
{  
    public: 
    int data;  
    listNode* next;  
};  
class treeNode  
{  
    public: 
    int data;  
    treeNode* left;  
    treeNode* right;  
};  
  
treeNode* newNode(int data);  
int countNodesOfList(listNode *head);  
treeNode* sortedListToBTrecur(listNode **head_ref, int n);  
treeNode* sortedListToBST(listNode *head)  
{  
    int n = countNodesOfList(head);  
  
    return sortedListToBTrecur(&head, n);  
}  
treeNode* sortedListToBTrecur(listNode **head_ref, int n)  
{ 
    if (n <= 0)  
        return NULL;  
    treeNode *left = sortedListToBTrecur(head_ref, n/2);  
    treeNode *root = newNode((*head_ref)->data);  
    root->left = left;  
    *head_ref = (*head_ref)->next;  
    root->right = sortedListToBTrecur(head_ref, n - n / 2 - 1);  
  
    return root;  
}  
  
int countNodesOfList(listNode *head)  
{  
    int count = 0;  
    listNode *temp = head;  
    while(temp)  
    {  
        temp = temp->next;  
        count++;  
          }  
    return count;  
}  
void push(listNode** head_ref, int new_data)  
{  
    listNode* new_node = new listNode(); 
    new_node->data = new_data;  
    new_node->next = (*head_ref);  
    (*head_ref) = new_node;  
}  
void printList(listNode *node)  
{  
    while(node!=NULL)  
    {  
        cout << node->data << " ";  
        node = node->next;  
    }  
}  
treeNode* newNode(int data)  
{  
    treeNode* node = new treeNode(); 
    node->data = data;  
    node->left = NULL;  
    node->right = NULL;  
  
    return node;  
}  
  void preOrder(treeNode* node)  
{  
    if (node == NULL)  
        return;  
    cout<<node->data<<" ";  
    preOrder(node->left);  
    preOrder(node->right);  
}  
int main()  
{  
    cout<<"\n\n20051973 GIRIRAJ KRISHNA SHARMA\n\n"; 
    
    listNode* head = NULL;  
    push(&head, 7);  
    push(&head, 6);  
    push(&head, 5);  
    push(&head, 4);  
    push(&head, 3);  
    push(&head, 2);  
    push(&head, 1);  
  
    cout<<"The initial linked list was :";  
    printList(head);  
    treeNode *root = sortedListToBST(head);  
    cout<<"\nTraversal of the BT from the Root to the leaves : ";  
    preOrder(root);  
   return 0;  
}