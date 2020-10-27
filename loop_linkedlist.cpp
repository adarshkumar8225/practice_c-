// Detect a loop in linked list with complexity of O(N)
// Hare and turtle theorem is used to solve the problem in linear time
// Two pointer is taken one incremented by 2 position and other incremented by 1 position.
// If both pointer becomes equal at any time then there must be a loop otherwise no loop is present..
// *************************************************************************************************

bool detectLoop(Node* head)
{
    // your code here
    int count=0;
    Node *trav=head;
    
    Node *temp=head;
    while(trav!=NULL&& trav->next != NULL)
    {
        temp=temp->next;
        trav=trav->next->next;
        if(temp==trav) return 1;

    }
    
    return 0;
}
