//link of questions:::: https://practice.geeksforgeeks.org/problems/merge-two-sorted-linked-lists/1#
//here we will add all the node of list2 in list1 at appropriate position
//first check if first element of list1 greater than first element of list 2
//if yes the take the first node of list 2 and put its address in head_A.
//for othe node compare element next to the current pointer of list1 with element at current 
//pointer in list2 .....
//*****************************************************************************************************************

Node* sortedMerge(Node* head_A, Node* head_B)  
{  
    Node *trav1,*trav2,*temp;
    trav1=head_A;
    trav2=head_B;
    //here we want to arrange the nodes in sorted order and 
    //return head_A;
    //if first element of list 1 is greater than first element of list 2
    if(trav1->data >= trav2->data)
    {
        head_A=trav2;
        trav2=trav2->next;
        head_A->next=trav1;
        trav1=head_A;
    }
    while(1)
    {
        //if first list ends just put address of next list pointer to the end
        // of list 1
        if(trav1->next==NULL)
        {
            trav1->next=trav2;
            return head_A;
        }
        //if list 2 ends then just return list1 pointer
        else if(trav2==NULL)
        {
            return head_A;
        }
        //otherwise check if next element to the current pointer of 
        //list 1 is greater than current pointer element of list 2.
        else
        {
            //if yes then add that node of list2 to list1 just after current
            //pointer
            if(trav1->next->data >= trav2->data)
            {
                temp=trav1->next;
                trav1->next=trav2;
                trav2=trav2->next;
                trav1->next->next=temp;
                trav1=trav1->next;
            }
            //else just move to next node of list1
            else
            trav1=trav1->next;
        }
    }
    
}
