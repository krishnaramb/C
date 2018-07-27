

#include <stdio.h>

typedef struct node {
  int val;
  struct node * next;
}Node;

/*function which takes head of a link list, it reverse the link list upto half
of the link list and saves those new header newheader1 and newheader2 in the memory
passed in the argument

For returning two values ( two headers), we could also use global variables */

void  ReverseFromMid(Node* head, Node **newhead1, Node **newhead2)
{
  *newhead1 = NULL;
  *newhead2 = NULL;
  Node * curr = head;
  Node * prev = NULL;
  Node * tmp = NULL;
  Node *fast = curr->next;




  if (head == NULL)
    return;
  while (fast != NULL && fast->next != NULL)
  {
    tmp = curr->next;
    curr-> next = prev;
    prev = curr;
    curr = tmp;
    fast = fast->next->next;
  }
  *newhead1 = prev;
  *newhead2 = curr;
}

/*funtion to print all he nodes value when head of the node is given*/
void printNode(const Node * head)
{
  const  Node *curr = head;
  while(curr)
  {
   printf("%d ", curr->val);
    curr=curr->next;
  }
  printf("\n");
}

/* main driver code to test the subroutine*/
int main()
{
  /* node n1 is pointing to head of linklist: 1->2->3->4->5 */
  Node n1, n2, n3,n4,n5,n6,n7;
  Node *newhead1;
  Node *newhead2;
  n1.val = 1;
  n1.next = &n2;

  n2.val = 2;
  n2.next = &n3;

  n3.val = 3;
  n3.next = &n4;

  n4.val = 4;
  n4.next = &n5;

  n5.val = 5;
  n5.next = &n6;

  n6.val = 6;
  n6.next = &n7;

  n7.val = 7;
  n7.next = NULL;


  printNode(&n1);
  ReverseFromMid(&n1,&newhead1,&newhead2);
  printNode(newhead1);
  printNode(newhead2);

}
