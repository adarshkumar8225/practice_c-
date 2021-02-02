//problem link::  https://practice.geeksforgeeks.org/problems/get-minimum-element-from-stack/1#


/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/
int m;//used to store min value.
/*returns min element from stack*/
int _stack :: getMin()
{
   //Your code here
   if(s.empty()) return -1;//if empty stack return -1.
   return m;//else return min value
}

/*returns poped element from stack*/
int _stack ::pop()
{
   //Your code here
   if(s.empty()) return -1;//when empty stack.
   int e=s.top();//store top most value of stack.
   s.pop();//delete that value from stack.
   //if obtained top is less than current min value
   if(e<m) 
   {
       int k=m;
       m=2*m-e;//used to obtain the previous minimum value.
       return k;
   }
   
   
   return e;
}

/*push element x into the stack*/
void _stack::push(int x)
{
   //Your code here
   if(s.empty())
   {
       //int min;
       m=x;
       s.push(x);
   }
   else
   {
       //when value to be pushed is less than min value
       if(x<m)
       {
           //this value is pushed to obtain previous min when current
           //min value is popped.
           s.push(2*x-m);//we dont push actual value here.
           m=x;
       }
       else s.push(x);
   }
   
}




/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/
int m;//used to store min value.
/*returns min element from stack*/
int _stack :: getMin()
{
   //Your code here
   if(s.empty()) return -1;//if empty stack return -1.
   return m;//else return min value
}

/*returns poped element from stack*/
int _stack ::pop()
{
   //Your code here
   if(s.empty()) return -1;//when empty stack.
   int e=s.top();//store top most value of stack.
   s.pop();//delete that value from stack.
   //if obtained top is less than current min value
   if(e<m) 
   {
       int k=m;
       m=2*m-e;//used to obtain the previous minimum value.
       return k;
   }
   
   
   return e;
}

/*push element x into the stack*/
void _stack::push(int x)
{
   //Your code here
   if(s.empty())
   {
       //int min;
       m=x;
       s.push(x);
   }
   else
   {
       //when value to be pushed is less than min value
       if(x<m)
       {
           //this value is pushed to obtain previous min when current
           //min value is popped.
           s.push(2*x-m);//we dont push actual value here.
           m=x;
       }
       else s.push(x);
   }
   
}
