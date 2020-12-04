//problem link::::>>>  https://practice.geeksforgeeks.org/problems/ugly-numbers2254/1#



class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    int i2=0,i3=0,i5=0,i;
	    unsigned long long int ugly[n];
	    ugly[0]=1;
	    unsigned long long int next2=2;
	    unsigned long long int next3=3;
	    unsigned long long int next5=5;
	    unsigned long long int next_ugly=1;
	    
	    for(i=1;i<n;i++)
	    {
	        next_ugly=min(next2,min(next3,next5));
	        ugly[i]=next_ugly;
	        if(next_ugly==next2)
	        {
	            i2=i2+1;
	            next2=ugly[i2]*2;
	        }
	        if(next_ugly==next3)
	        {
	            i3=i3+1;
	            next3=ugly[i3]*3;
	        }
	        if(next_ugly==next5)
	        {
	            i5=i5+1;
	            next5=ugly[i5]*5;
	        }
	    }
	    return ugly[n-1];
	}
};
