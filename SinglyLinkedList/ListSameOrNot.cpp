#include<iostream>
using namespace std;

//Creating a struct of type Node
struct Node
{
    int data;
    Node* next;
};

/*This function will take a value and a position
and insert the value in the given linked list at
the position specified by user */
void insertByPos(Node* &n, int x, int pos)
{
    //creating new node
    Node* current = new Node;
    current->data = x;
    current->next = NULL;

    //If the data is inserted at first position,
    //That means you need to change head i.e., n
    if(pos == 1 || n == NULL)
    {
        current->next = n;
        n = current;
    }
    else
    {
        int i = 1;
        // We need two pointers because if the data
        // is inserted in the end of in between then
        // previous node's next value will be affected
        Node* thisNode = n;
        Node* prevNode = NULL;
        //Traverse until you reach the position or
        // you reach the end of list
        while(i < pos && thisNode != NULL)
        {
            prevNode = thisNode;
            thisNode = thisNode->next;
            i++; // counting the number of nodes
        }
        // Condition to check if you have reached the end of the list
        if(thisNode == NULL)
        {
            prevNode->next = current;
        }
        else
        {
           prevNode->next = current;
           current->next = thisNode;
        }
    }
}

void display(Node* n)
{
    while(n != NULL)
    {
        cout << n->data << " -> ";
        n = n->next;
    }
    cout << endl;
}

bool isSame(Node* n1, Node* n2)
{
    while(n1 != NULL && n2 != NULL)
    {
        if(n1->data != n2->data)
            return false;
        n1 = n1->next;
        n2 = n2->next;
    }
    if(n1 == NULL && n2 == NULL)
        return true;
    else
        return false;
}

int main()
{
    Node* head1 = NULL, *head2 = NULL;
    int x, pos;

    // This is infinite loop, which will keep on taking values,
    // until user enters 0
    while(1)
    {
        cout <<"Enter the data for list 1:";
        cin >> x;
        if(x ==0 )break;
        cout << "Enter the position:";
        cin >>pos;

        insertByPos(head1, x, pos);
        display(head1);
    }

    while(1)
    {
        cout <<"Enter the data for list 2:";
        cin >> x;
        if(x ==0 )break;
        cout << "Enter the position:";
        cin >>pos;

        insertByPos(head2, x, pos);
        display(head2);
    }

    if(isSame(head1, head2))
        cout << "Lists are same" <<endl;
    else
        cout << "Lists are not same" <<endl;

}

