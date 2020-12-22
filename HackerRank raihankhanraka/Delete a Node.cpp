/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
    int i;
    Node *p;
    p=head;
    for(i=0;i<position-1;i++)
        head=head->next;
    Node *temp;
    if(position==0)
        {
        p=head->next; return p;
        }
    else
        {
        temp=head->next;
        head->next=temp->next;
        
        free(temp);
        }
        return p;
}
