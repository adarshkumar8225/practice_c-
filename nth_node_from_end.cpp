//take two pointer one pointing to head and other n node ahead.....
// now increment both the pointer parallely..........
//when ahead pointer reaches end first pointer reaches to desired node
//**************************************************************************************************

int getNthFromLast(Node *head, int n)
{
       // Your code here
    Node *trav1=head;
    Node *trav2=head;
    //make one pointer n node ahead so that when it reaches end the trav1 pointer 
    //points to desired element.
    while(n>1)
    {
        trav2=trav2->next;
        //if n is greater than number of nodes in the list return -1.
        if(trav2==NULL) return -1;
        n--;
    }
    while(trav2->next!=NULL)
    {
        trav1=trav1->next;
        trav2=trav2->next;
    }
    return(trav1->data);
}
