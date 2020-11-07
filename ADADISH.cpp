// codechef problem tag: ADADISH
//first find the sum of all the time then take half of it.
//if one burner can take half then other will also take half time 
//if one burner take less than half but closest to half value then our ans would be (total_time-half)
//if one burner take more than half but closest to half value then just return more than half value
//all testcases satisfied
//****************************************************************************************************
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
//function to form the subsets recursively.....
void subsetsUtil(vector<int>& A, vector<vector<int> >& res, 
                 vector<int>& subset, int index) 
{ 
    res.push_back(subset); 
    for (int i = index; i < A.size(); i++) { 
  
        // include the A[i] in subset. 
        subset.push_back(A[i]); 
  
        // move onto the next element. 
        subsetsUtil(A, res, subset, i + 1); 
  
        // exclude the A[i] from subset and triggers 
        // backtracking. 
        subset.pop_back(); 
    } 
  
    return; 
} 
  
// below function returns the subsets of vector A. 
vector<vector<int> > subsets(vector<int>& A) 
{ 
    vector<int> subset; 
    vector<vector<int> > res; 
  
    // keeps track of current element in vector A; 
    int index = 0; 
    subsetsUtil(A, res, subset, index); 
  
    return res; 
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N,i,sum=0,p;
        vector<int> c;
        cin>>N;
        
        for(i=0;i<N;i++)
        {
            cin>>p;
            c.push_back(p);
            sum=sum+p;
        }
        int half=sum/2;
        int min=0,diff=half,sum1=0;
        //here all the subsets are stored
        vector<vector <int> > res=subsets(c);
        //check all the sum of subsets and store one which is close to the half 
        //since we have two burner so if half can be made on one burner
        //then other half can be made on other
        for(int j=0;j<res.size();j++)
        {
            sum1=0;
            for(int k=0;k<res[j].size();k++)
            {
                sum1=sum1+res[j][k];
            }

            if(abs(sum1-half)<diff)
            {
                min=sum1;
                diff=abs(sum1-half);
                if(diff==0)break;
            }
        }
        //if the value closest to half is less than or equal to half then print 
        //sum-min which is greater than equal to half
       if(min<=half)
        cout<<(sum-min)<<endl;
        //when min is greater than half then print min itself because remaining will 
        //take more time
        else cout<<min<<endl;
        c.clear();
    }
}

