//Create a BST from input values

#include<iostream>
#include<conio.h>
using namespace std;
   
typedef struct node
{
   int data;
   struct node* left;
   struct node* right;
}Node;

Node * insert(Node *root,int cdata)
{
   if (root == NULL)
   {
      Node *mynode;
      mynode = new Node;
      mynode->data=cdata;
      mynode->left=NULL;
      mynode->right=NULL;
      return mynode;
   }
   else
   {
      Node *current;
      if (root->data>cdata)
      {
         current=insert(root->left,cdata);
         root->left = current;
      }
      else
      {
         current=insert(root->right,cdata);
         root->right = current;   
      }
      return root;
   }
}  

void preOrderTraversal(Node *root)
{
   if (root == NULL) return;
   cout<<root->data<<" "<<endl;
   preOrderTraversal(root->left);
   preOrderTraversal(root->right);
}
    
void postOrderTraversal(Node *root)
{
   if (root == NULL) return;

   postOrderTraversal(root->left);
   postOrderTraversal(root->right);
   cout<<root->data<<" "<<endl;
}


void inOrderTraversal(Node *root)
{
   if (root == NULL) return;

   inOrderTraversal(root->left);
   cout<<root->data<<" "<<endl;
   inOrderTraversal(root->right);

}

int main()
{
   Node* root = NULL;
   int t;
   int data;

   cin >> t;

   while(t-- > 0)
   {
       cin >> data;
       root = insert(root, data);
   }
   
   //print the tree
   cout<<"pre Order traversal is "<<endl;
   preOrderTraversal(root);
 
    cout<<"post Order traversal is "<<endl;  
   postOrderTraversal(root);
   
   cout<<"inOrder traversal is "<<endl;  
   inOrderTraversal(root);
   
   
   getch();    
   return 0;
}
   
   



