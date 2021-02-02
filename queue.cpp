//implement queue using 2 stacks.

/* The structure of the class is
class StackQueue{
private:   
    // These are STL stacks ( http://goo.gl/LxlRZQ )
    stack<int> s1;
    stack<int> s2;
public:
    void push(int);
    int pop();
}; */

/* The method push to push element into the queue */
void StackQueue :: push(int x)
 {
        // Your Code
        //vacate the stack s1 and put its all element in s2.
        //now push the current element into s1.
        //then push all elements of s2 into s1 and make the s2 empty.
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
 }

/*The method pop which return the element poped out of the queue*/
int StackQueue :: pop()
{
        // Your Code
        //if stack s1 is empty return -1
        if(s1.empty()) return -1;
        //store the top most value of s1.
        int e=s1.top();
        //pop deletes the topmost value
        s1.pop();
        //then return the value stored in e
        return e;
}
