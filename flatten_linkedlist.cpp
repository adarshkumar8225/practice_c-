//question on geekforgeeks: 
//link of question: https://practice.geeksforgeeks.org/problems/flattening-a-linked-list/1#

//output should be a sorted linkedlist



//function to merge two sorted linked list>>>>>>>>
Node *merge(Node *T1,Node *T2)
{
    Node *temp,*tv=T1;
    int count1=0;
    while(1)
    {
        //if first linked list reaches end then simply add other list at bottom.
        if(tv->bottom==NULL)
        {
            tv->bottom=T2;
            return T1;
        }
        //if 2nd linked list ends then just return the list 1 pointer 
        else if(T2==NULL)
        {
            return T1;
        }
        //else we need to compare the values of the two list to merge
        else
        {
            // if first element of list1 is greater than first element of list2
            //then just swap the element
            if(count1==0 && tv->data >= T2->data)
            {
                int t=tv->data;
                tv->data=T2->data;
                T2->data=t;
            }
            //check the bottom value of current pointer with current node of list 2
            //if value of first list greater than 2nd list element
            //include that node as a node of list1 and increment list2 pointer
            if(tv->bottom->data >= T2->data)
            {
                temp=tv->bottom;
                tv->bottom=T2;
                T2=T2->bottom;
                tv->bottom->bottom=temp;
                tv=tv->bottom;
                count1++;
                
            }
            //else just keep traversing the list1
            else
            {
                tv=tv->bottom;
                count1++;
            }
            
        }
    }
}
/*  Function which returns the  root of 
    the flattened linked list. */

Node *flatten(Node *root)
{
   // Your code here
   Node *trav1,*trav2,*temp;
   trav1=root;//horizontal pointer
   trav2=root->next;//vertical pointer
   while(trav2!=NULL)
   {
       temp=trav2->next;
       //it will merge the two consecutive column of linked list
       trav1=merge(trav1,trav2);
       trav2=temp;
   }
   return root;
}
