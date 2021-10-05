#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
};

void printlinkedlist(node *node)
{
    int c = 0; //taken just for good looking output
    while (node != NULL)
    {
        if (c > 0)
        {
            cout << "->" << node->data;
            node = node->next;
        }
        else
        {
            cout << node->data;
            node = node->next;
            c++;
        }
    }
}
int main()
{
    int n;
    cout << "Enter no. of nodes=";
    cin >> n;

    int num, c = 0;        //initialized c for setting head with second node..
    node *head = new node; //initialized head node
    node *temp = new node; //initialized temp node

    cin >> num;
    head->data = num;
    
    for (int i = 2; i <= n; i++)
    {
        if (c == 0)
        {
            cin >> num;
            temp->data = num;
            head->next = temp; //head point to second node i.e. temp
            c++;
        }
        else
        {
            cin >> num;
            node *temp1 = new node; //initialize other temp node for every value
            temp1->data = num;
            temp->next = temp1; //point to temp1 to temp
            temp = temp1;       //set temp as temp1
        }
    }
    printlinkedlist(head);
}