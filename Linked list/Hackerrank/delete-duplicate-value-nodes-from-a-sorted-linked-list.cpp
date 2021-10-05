SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
SinglyLinkedListNode *p = head;
while(head->next!=NULL)
{
    if(head->data == head->next->data)
    {
        head->next = head->next->next;
    }
    else
    {
        head = head->next;
    }
    
}
return p;
}
