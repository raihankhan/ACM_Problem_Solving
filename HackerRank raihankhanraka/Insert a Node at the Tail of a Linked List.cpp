/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function.
    Node *p=head;
    Node *New;
    New=(Node*)malloc(sizeof(Node));
    New->data = data  ;
    int i;
    for(i=0;i<position-1;i++) head=head->next;
    if(position==0)
    { New->next=head; p=New; }
    else
        { New->next=head->next;
          head->next=New;
        }
    return p;
}
