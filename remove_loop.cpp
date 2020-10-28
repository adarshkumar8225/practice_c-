//removal of loop present in linked list in O(N) complexity.........................
//detect loop using two pointer one incremented by one position and other by two position
//count the number of nodes in the loop by keeping one pointer at meeting point and other incrementing
//now take a pointer pointing to node and other point to s node ahead where s = no of nodes in loop
//increment both pointer parallely they will meet at junction
// now move the pointer s node ahead and put NULL now the loop is removed
//**********************************************************************************************************


void removeLoop(Node* head)
{
    // code here
    // just remove the loop without losing any nodes
    Node *trav1,*trav2;
    trav1=head;
    trav2=head;
    int flag=0,count=1;
    //way to detect loop using two pointer.............
    while(trav2!=NULL && trav2->next!=NULL)
    {
        trav1=trav1->next;
        trav2=trav2->next->next;
        if(trav1==trav2) 
        {
            flag=1;
            break;
        }
    }
    //loop is present in the linked list*************************
    if(flag==1)
    {
        trav1=trav1->next;
        //count number of elements in the loop...............
        while(trav1!=trav2)
        {
            trav1=trav1->next;
            count++;
        }
        //set both pointer pointing to head......
        trav1=head;
        trav2=head;
        int c=count;
        //make trav2 to point count position ahead..........
        while(count)
        {
            trav2=trav2->next;
            count--;
        }
        //now find intersection point of both pointer it will meet at junction
        while(trav1!=trav2)
        {
            trav1=trav1->next;
            trav2=trav2->next;
        }
        //move count position ahead and insert NULL to remove the loop
        while(c>1)
        {
            trav1=trav1->next;
            c--;
        }
        trav1->next=NULL;
    }
}
