    struct node *reverse (struct node *head, int k)
    { 
        //Stack is used to store the nodes address
        stack<struct node *> s;
        struct node *trav=head,*trav1;
        int p=0;
        //Loop to traverse the complete linked list
        while(trav!=NULL)
        {
            //We have to reverse in group of k 
            //store k nodes in stack.
            for(int i=0;i<k && trav!=NULL;i++)
            {
                s.push(trav);
                trav=trav->next;
            }
            //for first time you have to store first node in head pointer
            if(p==0)
            {
                head=s.top();
                s.pop();
                trav1=head;
                trav1->next=NULL;
            }
            //For other keep on inserting the values.
            while(!s.empty())
            {
                trav1->next=s.top();
                s.pop();
                trav1=trav1->next;
                trav1->next=NULL;
            
            }
            p++;
            
        }
        return head;
    }
