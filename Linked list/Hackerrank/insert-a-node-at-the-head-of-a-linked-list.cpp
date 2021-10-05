/*
  Insert Node at the begining of a linked list
  Initially head pointer argument could be NULL for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
return back the pointer to the head of the linked list in the below method.
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
    Node* toInsert = new Node;
    toInsert->data = data;
    toInsert->next = head;
    return toInsert;
}

SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode* pNewNode = new SinglyLinkedListNode(data);
    if ( llist == nullptr ) {
        llist = pNewNode;
        return llist;
    }
    else {
        pNewNode->next = llist;
        return pNewNode;
    }
}

