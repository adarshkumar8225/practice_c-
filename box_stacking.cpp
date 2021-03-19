

//Problem Link-->> https://practice.geeksforgeeks.org/problems/box-stacking/1#

//Algorithm for the Problem
// For each entry of (length, width, height) write all its 6 combination
// also store base area for each combination i.e length *breadth
//Sort these vectors based on decreasing order of its base area
// Now apply Longest common subsequence method of Dynamic Programming.
    int maxHeight(int height[],int width[],int length[],int n)
    {
        //Your code here
       vector <int> l,w,h,area;
       for(int i=0;i<n;i++)
       {
           //keep all possible rotation based on the given box dimensions.
           //Since 3 dimension so 6 possible combination of (length,width,height).
           l.push_back(length[i]);
           w.push_back(width[i]);
           h.push_back(height[i]);
           
           area.push_back(l[l.size()-1]*w[w.size()-1]);
           
           l.push_back(length[i]);
           w.push_back(height[i]);
           h.push_back(width[i]);
           
           area.push_back(l[l.size()-1]*w[w.size()-1]);
           
           l.push_back(width[i]);
           w.push_back(length[i]);
           h.push_back(height[i]);
           
           area.push_back(l[l.size()-1]*w[w.size()-1]);
           
           l.push_back(width[i]);
           w.push_back(height[i]);
           h.push_back(length[i]);
           
           area.push_back(l[l.size()-1]*w[w.size()-1]);
           
           l.push_back(height[i]);
           w.push_back(length[i]);
           h.push_back(width[i]);
           
           area.push_back(l[l.size()-1]*w[w.size()-1]);
           
           l.push_back(height[i]);
           w.push_back(width[i]);
           h.push_back(length[i]);
           
           area.push_back(l[l.size()-1]*w[w.size()-1]);
       }
       //Sort these vectors area wise in decreasing order of its area
       
       for(int i=0;i<area.size()-1;i++)
       {
           for(int j=i+1;j<area.size();j++)
           {
               if(area[i]<area[j]) 
               {
                   //Swap area
                   int a=area[i];
                   area[i]=area[j];
                   area[j]=a;
                   //Swap length
                   int len=l[i];
                   l[i]=l[j];
                   l[j]=len;
                   //Swap Width
                   int wid=w[i];
                   w[i]=w[j];
                   w[j]=wid;
                   //Swap Height
                   int high=h[i];
                   h[i]=h[j];
                   h[j]=high;
               }
           }
       }
       //Now apply longest Increasing Subsequence concept to get the longest 
       //possible height of the stack
       int dp[area.size()];
       dp[0]=h[0];
       int max=0,o_max=0;
       for(int i=1;i<area.size();i++)
       {
           max=0;
           for(int j=0;j<i;j++)
           {
               if(l[i]<l[j] && w[i]<w[j])
               {
                   if(dp[j]>max) max=dp[j];
               }
           }
           dp[i]=max+h[i];
           max=max+h[i];
           if(max>o_max) o_max=max;
       }
       
      return o_max; 
    }
