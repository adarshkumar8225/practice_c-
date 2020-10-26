//given a linked list and a value k. Reverse a linked list in a group of size k.............................
//ex: 1->2->3-> 4-> 5->6->7 and k=3 output: 3->2->1->6->5->4->7
struct node *reverse (struct node *head, int k)
{ 
    // Complete this method
    struct node *trav, *temp ,*main,*kth,*kth_nxt;
    trav=head;
    int i=0;
    kth_nxt=head;
    head=NULL;
    while(trav!=NULL)
    {
        if(i==k-1) main=trav;
        if(i%(2*k)==2*k-1 || trav->next==NULL)
        {
            kth_nxt->next=trav;
            kth_nxt=kth;
            
            
        }
        if(i%k==0)
        {
            kth=trav;
            head=NULL;
        }
        temp=trav;
        trav=trav->next;
        temp->next=head;
        head=temp;
       // if(i%k==0) head=NULL;
        i++;
        
    }
    return main;
}
