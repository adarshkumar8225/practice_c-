//delete node when reference to the node which is to be deleted is given

void deleteNode(Node *node)
{
   // Your code here
   //here the reference of node to be deleted is given.
   //swap the value of next node with this node and delete the last node.
   Node *trav1=node;
   Node *trav2=node->next;
   while(trav2->next!=NULL)
   {
       trav1->data=trav2->data;
       trav1=trav1->next;
       trav2=trav2->next;
   }
   trav1->data=trav2->data;
   trav1->next=NULL;
}
