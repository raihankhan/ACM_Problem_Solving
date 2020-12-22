

// Complete the reverse function below.

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */
DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
DoublyLinkedListNode* previous;
DoublyLinkedListNode* curr=head;
while(curr!=nullptr)
{
    previous=curr->prev;
    curr->prev=curr->next;
    curr->next=previous;
    curr=curr->prev;
}
if(previous!=nullptr)
head=previous->prev;
return head;
}

