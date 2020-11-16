#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

vector<int> height;
//vector<int > value;
//************use recursion to calculate the result*****************************

int calculate(int L,int R)
{
    int i,temp,j,max_count;
    static int max;
    if(L==R)
    {
        
        max=height[R];
        
        return 1;
    }
    else
    {
       /*// value.push_back(calculate(L+1,R));
       // temp=value[value.size()-1];
        temp=calculate(L+1,R);
        if(height[L]<min) 
        {
            temp++;
            min=height[L];
        }
        
        return temp;*/
        
        temp=calculate(L,R-1);
        if(height[R]>max) 
        {
            temp++;
            max=height[R];
        }
        return temp;
    }

}



int main()
{   
    //N number of heights, q queries and s used to calculate L and R.
    int N,q,s;
    cin>>N>>q>>s;
    
    int i,last=0,x,y,L,R,heights,val,k;
    height.push_back(0);
    //store N heights to global vector can be accessed by all functn.
    for(i=0;i<N;i++)
    {
        cin>>heights;
        height.push_back(heights);
    }
    
    //for each query..............................!!!!!!!!!!!!!
    for(i=0;i<q;i++)
    {
        cin>>x>>y;
        L=(x+s*last-1)%N+1;
        R=(y+s*last-1)%N+1;
        if(L>R)
        {
            L^=R;
            R^=L;
            L^=R;
        }

       last=calculate(L,R);
       if(last==R-L+1){
           cout<<last<<endl;
           continue;
       } 
       for(k=L+1;k<=R;k++)
       {
            val=calculate(k,R);
            if(val>last) last=val;

       }
        cout<<last<<endl;
    }


}


