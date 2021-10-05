//        ** Sumonta Saha Mridul **                                    SWE - SUST
/*     

 *        ######    ##     ##  ##     ##   #######   ##    ##   ########      ###
 !       ##    ##   ##     ##  ###   ###  ##     ##  ###   ##      ##        ## ##
 ?       ##         ##     ##  #### ####  ##     ##  ####  ##      ##       ##   ##
 *        ######    ##     ##  ## ### ##  ##     ##  ## ## ##      ##      ##     ##
 !             ##   ##     ##  ##     ##  ##     ##  ##  ####      ##      #########
 ?       ##    ##   ##     ##  ##     ##  ##     ##  ##   ###      ##      ##     ##
 *        ######     #######   ##     ##   #######   ##    ##      ##      ##     ##

*/
#include<bits/stdc++.h>
using namespace std;

// * creating class for own data type ( int value + address of next value)

class Node
{
    public:
        int data ;
        Node *next ;

        Node (int data)
        {
            this -> data = data ;
            next = NULL ;
        }



};
// ? complexity = on2
Node *takeinput()
{
    // * taking the 1st element of linked list
    int data;
    cin >> data ;

    // * creating head for taking the adress of 1st value
    Node *head = NULL ;

    // * input untill you get -1

    while( data != -1)
    {
        // * create node dynamically 
        // ! if we do statically it will remove the last data of node everytime
        Node *newnode = new Node(data);

        // * just take the head value of 1st element

        if( head == NULL )
        {
            head = newnode ;  // * head = &n2 type
        }

        // * adress of the value

        else
        {   
            //* create temp node
            Node *temp = head ;

            // * search for last Null value
            // * put address of next value

            while(temp->next != NULL)
            {
                temp = temp->next ;
                // * if not then move to next value
            }

            // * puting the address
            temp -> next = newnode ;


        }

        cin >> data ;
    }

    return head;
}

// * head based print function
void print(Node *head)
{
    // ! create extra for safeing head
    Node *temp = head ;

    while(temp != NULL)
                             // * stop in last node temp->next != NULL
    {
        cout<<temp->data<<" ";
        
        // * passing the head
        temp = temp->next;
    }
}


int main()
{  

    Node *head = takeinput() ;

    print(head) ;
    
    


}
