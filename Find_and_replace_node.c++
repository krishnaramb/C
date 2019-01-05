//function to find a node in a Binary tree and replace it with the given node*

#include <iostream>

typedef struct node {
  int data;
  struct node * left;
  struct node * right;
}Node;
int search_replace_helper(Node* , Node * , int, Node *  );

Node* search_replace(Node * root, int val, Node* replacewith)
{
  //std::cout<<"\nSR\n";
  if (root == nullptr)
    return nullptr;
  if (root->data == val)
  {
    replacewith->left = root->left;
    replacewith->right = root->right;
    return replacewith;
  }
  if (search_replace_helper(root->left, root, val, replacewith) == 1)
    return root;
  if (search_replace_helper(root->right, root, val, replacewith) == 1)
    return root;
  return root;
}


int search_replace_helper(Node* node, Node * parent, int val, Node * replacewith )
{
  //std::cout<<"\nrecur\n";
  if (node == nullptr)
    return 0;
  if (node->data == val)
  {
    replacewith->left = node->left;
    replacewith->right = node->right;
    if(parent->left == node) //node is left child
        parent->left = replacewith;
    else //node is right child
        parent->right = replacewith;
    return 1;
  }
  if(search_replace_helper(node->left, node, val, replacewith) == 1)
      return 1;

  if (search_replace_helper(node->right, node, val, replacewith) == 1)
    return 1;
 return 0;
}

Node* createnode(int data){
  Node* node = (Node*)malloc(sizeof(Node));
  node->data = data;
  node->left = nullptr;
  node->right = nullptr;
  return node;
}
/*inorder traversal of the tree */
void printTree(Node * node)
{
  if (node->left == NULL) std::cout<<node->data<<"-";
  else{
    printTree(node->left);
    std::cout<<node->data<<"-";
  }
  if(node->right != NULL)
  {
    printTree(node->right);
  }
}

/*both subtrees of a node are printed out completely before the node itself is printed*/
void printPostoder(Node* node)
{
  if(node->left != NULL)
    printPostoder(node->left);
  if(node->right != NULL)
    printPostoder(node->right);
  std::cout<<node->data;
}
int main()
{
  Node* n1 = createnode(1);
  Node* n2 = createnode(2);
  Node* n3 = createnode(3);
  Node* n4 = createnode(4);
  Node* n5 = createnode(5);
  Node* n6 = createnode(6);
  Node* n7 = createnode(7);
  n1->left = n2;
  n1->right= n3;
  n2->left = n4;
  n2->right = n5;
  n3->left = n6;
  n3->right = n7;
  printTree(n1);
Node *newnode = createnode(100);
std::cout<<"\n-------------------\n";
printTree(search_replace(n1,10,newnode));

}
