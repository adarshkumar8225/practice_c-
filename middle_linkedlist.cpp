/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(Node *head)
{
   // Your code here
   if(head==NULL) return -1;
   struct Node *Trav;
   Trav=head;
   int count=1,i;
   //loop for counting the number of elements in the linked list...............
   while(Trav->next!=NULL)
   {
       count++;
       Trav=Trav->next;   
   }
   Trav=head;
   count=count/2+1;
   //Reach to the middle element....................
   for(i=0;i<count-1;i++)
   {
       Trav=Trav->next;
   }
   return(Trav->data);
}
