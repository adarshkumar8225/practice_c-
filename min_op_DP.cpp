 // problem link:  https://practice.geeksforgeeks.org/problems/find-optimum-operation4504/1#

 
 
class Solution
{
 
    int value[1000000];//array to store the result of calculated value in Dynamic Programming.
  public:
    //constructor to initialize the array with -1.
    Solution()
    {
        memset(value,-1,sizeof(value));
    }
    //function to compute the value for given n.
    int minOperation(int n)
    {
        
       
        if(value[n]!=-1) return value[n];//shows value already computed so just return the value.
        if(n==1)
        {
            value[n]=1;
            return value[n];
        }
        else
        {   
            //for n= even number.
            if(n%2==0)
            {
               value[n]=min(minOperation(n-1),minOperation(n/2))+1;//we can reach n either from n-1 or n/2 by adding 1 step
            }
            else
            {
                //for odd numbers call function with n-1 and add 1 to get the value.
                value[n]=minOperation(n-1)+1;
            }
            return value[n];
        }
    }
};
