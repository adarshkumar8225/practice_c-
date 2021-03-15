
// Factorial of large number upto 1000
//Problem Link-->>> https://practice.geeksforgeeks.org/problems/factorials-of-large-numbers2508/1#



vector<int> multiply(int x, vector<int> res)
{
    int carry = 0;  // Initialize carry
 
    // One by one multiply n with individual digits of res[]
    for (int i=0; i<res.size(); i++)
    {
        int prod = res[i] * x + carry;
 
        // Store last digit of 'prod' in res[]  
        res[i] = prod % 10;  
 
        // Put rest in carry
        carry  = prod/10;    
    }
 
    // Put carry in res and increase result size
    while (carry)
    {
        res.push_back(carry%10);
        carry = carry/10;
        
    }
    return res;
}
 
// This function finds factorial of large numbers
// and prints them
vector<int> factorial(int n)
{
    vector<int> res;
 
    // Initialize result
    res.push_back(1);
   
 
    // Apply simple factorial formula n! = 1 * 2 * 3 * 4...*n
    for (int x=2; x<=n; x++)
        res=multiply(x, res);
 
    reverse(res.begin(),res.end());
    return res;
}

