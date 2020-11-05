//check whether a linked list is a palindrome
//take half element in a stack and then compare remaning half element eith the element in the stack.



bool isPalindrome(Node *head)
{
    //Your code here
    Node *trav=head;
    
    int count=0,i,j;
    while(trav!=NULL)
    {
        trav=trav->next;
        count++;
    }
    trav=head;
    int A[count/2];
    for( i=0;i<count/2;i++)
    {
        A[i]=trav->data;
        trav=trav->next;
    }
    if(count%2==1) trav=trav->next;
    for(j=i-1;j>=0;j--)
    {
        if(trav->data!=A[j]) return 0;
        else trav=trav->next;
    }
    if(j==-1) return 1;
}

