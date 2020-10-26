// Intersection point of two linked list...................Algorithm given below
//1) Get count of the nodes in the first list, let be c1.
//2) Get count of the nodes in the second list, let be c2.
//3) Get the difference of counts d = abs(c1 – c2)
//4) Now traverse the bigger list from the first node till d nodes so that from here onwards both the lists have equal no of nodes.
//5) Then we can traverse both the lists in parallel till we come across a common node.




int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    Node *trav1,*trav2;
    trav1=head1;
    trav2=head2;
    int count1=0,count2=0,d;
    while(trav1!=NULL)
    {
        trav1=trav1->next;
        count1++;
    }
    while(trav2!=NULL)
    {
        trav2=trav2->next;
        count2++;
    }  
    d=abs(count1-count2);
    trav1=head1;
    trav2=head2;
    if(count1>count2)
    {
        while(d>0)
        {
            trav1=trav1->next;
            d--;
        }
    }
    else
    {
        while(d>0)
        {
            trav2=trav2->next;
            d--;
        }
    }
    while(trav1!=NULL)
    {
        if(trav1==trav2) return(trav1->data);
        else 
        {
            trav1=trav1->next;
            trav2=trav2->next;
        }
    }
    if(trav1==NULL) return -1;
}
