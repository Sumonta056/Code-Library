SinglyLinkedListNode *mergeLists(SinglyLinkedListNode *head1, SinglyLinkedListNode *head2)
{

    SinglyLinkedListNode *R = NULL;

    //base case
    if (head1 == NULL)
        return head2;
    if (head2 == NULL)
        return head1;
    if (head1 == NULL && head2 == NULL)
        return NULL;

    if (head1->data <= head2->data)
    {
        R = head1;
        R->next = mergeLists(R->next, head2);
    }
    else
    {
        R = head2;
        R->next = mergeLists(head1, R->next);
    }
    return R;
}