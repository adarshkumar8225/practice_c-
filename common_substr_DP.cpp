


class Solution
{
    int value[1000000];
  public:
   
    Solution()
    {
        memset(value,-1,sizeof(value));
    }
    int minOperation(int n)
    {
        //code here.
        
        if(value[n]!=-1) return value[n];
        if(n==1)
        {
            value[n]=1;
            return value[n];
        }
        else
        {
            if(n%2==0)
            {
               value[n]=min(minOperation(n-1),minOperation(n/2))+1;
               //value[n]=min(value[n-1],value[n/2])+1;
                //return value[n];
            }
            else
            {
                value[n]=minOperation(n-1)+1;
               // value[n]=value[n-1]+1;
            }
            return value[n];
        }
    }
};
