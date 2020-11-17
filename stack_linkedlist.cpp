//implement push and pop function of a stack using linked list 
//add and delete at the starting of linked list to get ouptput in O(1) time.


void MyStack ::push(int x) {
    // Your Code
    if(top==NULL)
    {
       top=new StackNode(x);
    }
    else
    {
        StackNode *temp=new StackNode(x);
        temp->next=top;
        top=temp;
    }
}

/* The method pop which return the element
  poped out of the stack*/
int MyStack ::pop() {
    // Your Code
    if(top==NULL) return -1;
    else
    {
        StackNode *temp;
        temp=top->next;
        int r=top->data;
        delete(top);
        top=temp;
        return r;
    }
}
