 // problem link:  https://practice.geeksforgeeks.org/problems/find-optimum-operation4504/1#
 
 
 int value[100]={-1};
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
                //return value[n];
            }
            else
            {
                value[n]=minOperation(n-1)+1;
                
            }
            return value[n];
        }
    }
