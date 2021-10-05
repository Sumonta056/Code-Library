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
    Node n1(1) ;

    // * keep the adress of n1 
    Node *head = &n1 ;     // ? & for taking adress


    Node n2(2) ;
    Node n3(3) ;
    Node n4(4) ;

    // * keep the adrees of n2 in n1 next;
    n1.next = &n2 ;
    n2.next = &n3 ;
    n3.next = &n4 ;



    // * printing the value by the head address

    print(head);
    
    
    


}
