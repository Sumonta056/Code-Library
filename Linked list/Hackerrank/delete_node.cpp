SinglyLinkedListNode *deleteNode(SinglyLinkedListNode *head, int position)
{
    auto pHead = head;
    auto pPrevHead = head;

    int iCount = 0;
    while (iCount < position)
    {
        iCount++;
        pPrevHead = head;
        head = head->next;
    }

    // * for delete the 1st node
    pPrevHead->next = head->next;
    if (position == 0)
    {
        pHead = head->next;
    }
    delete head;

    return pHead;
}