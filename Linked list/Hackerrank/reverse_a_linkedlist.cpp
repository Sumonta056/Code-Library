 void reverse()
    {
        // Initialize current, previous and
        // next pointers
        Node* current = head;
        Node *prev = NULL, *next = NULL;
 
        while (current != NULL) {
            // Store next
            next = current->next;
 
            // Reverse current node's pointer
            current->next = prev;
 
            // Move pointers one position ahead.
            prev = current;
            current = next;
        }
        head = prev;


    }


    SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
     // Initialize current, previous and
        // next pointers
        SinglyLinkedListNode* current = head;
        SinglyLinkedListNode* prev = NULL;
        SinglyLinkedListNode* nex = NULL;
 
        while (current != NULL) {
            // Store next
            nex = current->next;
 
            // Reverse current node's pointer
            current->next = prev;
 
            // Move pointers one position ahead.
            prev = current;
            current = nex;
        }
        head = prev;
        
        return head;
}