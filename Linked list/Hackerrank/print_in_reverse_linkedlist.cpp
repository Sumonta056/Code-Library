void reversePrint(SinglyLinkedListNode *head)
{
    if (head == NULL)
        return;

    vector<int> vec;
    auto tmp = head;

    while (tmp != NULL)
    {
        vec.push_back(tmp->data);
        tmp = tmp->next;
    }
    
    for (int i = vec.size() - 1; i >= 0; i--)
        cout << vec[i] << endl;
}