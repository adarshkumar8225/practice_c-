#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<vector>
#include<math.h>

using namespace std;

// int count=1;
vector <int> num;

int value(vector<int> v )
{
    int i;
    int sum=0,flag=0;
    for(i=0;i<v.size();i++)
    {
        sum=sum+pow(10,i)*v[i];
    }
   // if(num.size()==0) num.push_back(sum);
   // else 
   // {
        for(i=0;i<num.size();i++)
        {
            if(sum==num[i]) {
                flag=1;
                break;
            }
        }
   // }
    if(flag==0)
    {
        num.push_back(sum);
        return sum;
    }
    else
    return 0;
}


int permute(vector<int> a, int l, int r,long long int num1,long long int num2,int count)  
{  
    // Base case  
    if (l == r)
    {
        int val=value(a);
        if(val>=num1 && val<=num2 && val!=0) count++;
        
    }
    else
    {  
        // Permutations made  
        for (int i = l; i <= r; i++)  
        {  
  
            // Swapping done  
            swap(a[l], a[i]);  
  
            // Recursion called  
          count =permute(a, l+1, r,num1,num2,count);  
  
            //backtrack  
            swap(a[l], a[i]);  
        }  
    } 
    return count;
}

int  permutation(long long int num1,long long int num2)
{
    int i,j;
    vector<int> v,v1;
    int A=num1,B=num2;
    //int val;
    while(A)
    {
        v.push_back(A%10);
        v1.push_back(A%10);
        A=A/10;
    }
    int count=permute(v,0,v.size()-1,num1,num2,0);
    return count;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int first[10]={0},second[10]={0},i;
        long long int A,B;
        cin>>A>>B;
      long long  int num1=A,num2=B;
        if(num1==num2)
        {
            cout<<1<<endl;
            continue;
        }
        //store all digits of A in first array
        while(A)
        {
            first[A%10]=first[A%10]+1;
            
            A=A/10;
        }
        //store all digits of B in second array.........
        while(B)
        {
            second[B%10]=second[B%10]+1;
            B=B/10;
        }
        for( i=0;i<10;i++)
        {
            if(first[i]!=second[i]) 
            {
                cout<<0<<endl;
                break;
            }
            //cout<<first[i]<<second[i]<<" ";
        }
        if(i!=10) continue;
        else
        {
            cout<<permutation(num1,num2)<<endl;
            num.clear();
            //cout<<count<<endl;
        }
    }
}
