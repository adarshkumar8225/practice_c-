
//Reverse the linked list...................................................
struct Node* reverseList(struct Node *head)
{
    // code here
    // return head of reversed list
    struct Node *Trav,*temp;
    //reverse the first link
    Trav=head;
    temp=Trav->next;
    Trav->next=NULL;
    head=Trav;
    Trav=temp;
    // now reverse the remaining linked list 
    while(Trav!=NULL)
    {
        temp=Trav->next;//store address of next node
        Trav->next=head;// store previous node in the next of current node.
        head=Trav;// head takes the address of current node
        Trav=temp;// go to next node now
        
    }
    
    return(head);//return the head..........bvc
}
