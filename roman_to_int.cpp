#include <iostream>
#include<string>
using namespace std;
//function containing int value for corresponding roman char.
int int_value(char c)
{
    switch(c)
    {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        
    }
}
//start from end of the string 
//whenever (i)th char value is greater than (i-1)th char value then 
// take the difference of two as the value coprresponding to these two char.
//Example: IX since I<X so value for IX=10-1=9.................
int roman_to_int(string str)
{
    int len=str.size();
    int num=0,i,p,q;
    for(i=len-1;i>=0;i--)
    {
       p=int_value(str[i]);
       if(i>0)
       {
           q=int_value(str[i-1]);
       }
       else q=0;//for i=0 that is first element of roman string. 
       if(p>q)
       {
           num=num+p-q;//when (i)th char is greater than (i-1)th char.
           i--;
       }
       else
       {
           num=num+p;
       }
    }
    return num;
}


int main() {
	//code
	string str;
	int i,t;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>str;
	    cout<<roman_to_int(str)<<endl;
	}
	return 0;
}
