
//Rotate linkedlist by k position in anticlockwise direction................
Node* rotate(Node* head, int k)
{
    // Your code here
    struct Node *Trav,*Kth_node;
    Trav=head;
    while(k>1 && Trav->next!=NULL)
    {
        Trav=Trav->next;
        k--;
    }
    if(Trav->next== NULL) return head;

    Kth_node=Trav;
    while(Trav->next!=NULL)
    {
        Trav=Trav->next;
    }
    Trav->next=head;
    head=Kth_node->next;
    Kth_node->next=NULL;
    return(head);
}
