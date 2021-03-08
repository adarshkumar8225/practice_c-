// Find the next permutation of the given number ex: n=[1,3,2] its next permutation = [2,1,3]
//Problem Link--->> https://leetcode.com/problems/next-permutation/submissions/


//it returns the index of the min number which is grater than jth number.
 int fun(vector<int> nums,int j)
    {
        int flag=0,min,index=-1;
        for(int i=j+1;i< nums.size();i++)
        {
            if(nums[i]>nums[j])
            {
                if(flag==0)
                {
                    min=nums[i];
                    index=i;
                    flag=1;
                }
                else
                {
                    if(min>nums[i]) 
                    {
                        min=nums[i];
                        index=i;
                    }
                }
            }
        }
        return index;
    }
    // function to give next permutation
    void nextPermutation(vector<int>& nums) {
        
        for(int j=nums.size()-2;j>=0;j--)
        {
            int v=fun(nums,j);//function returns the index with which swapping is done.
          
            if(v!=-1)
            {
                // swap the numbers
                int value=nums[v];
                nums[v]=nums[j];
                nums[j]=value;
                //sort all the numbers after jth index to get next permutation.
                sort(nums.begin()+j+1,nums.end());
                return;
            }
        }
        // if no next permutation is present then print the smallest possible number
      //ex; if n=[3,2,1] no next permutation possible so output will be smallest number i.e [1,2,3].
        for(int i=0,j=nums.size()-1;i<=j;i++,j--) 
        {
            int val=nums[i];
            nums[i]=nums[j];
            nums[j]=val;
        }
        
        
    }
