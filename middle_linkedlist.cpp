/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(Node *head)
{
   // Your code here
   if(head==NULL) return -1;
   struct Node *Trav1,*Trav2;
   Trav1=head;
   Trav2=head;
   while(Trav2!=NULL && Trav2->next!=NULL)
   {
       Trav2=Trav2->next;
       Trav2=Trav2->next;
       Trav1=Trav1->next;
   }
  // int d=Trav1->data;
   return(Trav1->data);
}
