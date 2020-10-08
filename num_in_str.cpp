//first take a line of string as input then find if any number is present in the string.
//now among the number discard the number containing 9.
//among the remaining number print the maximum number.

#include <iostream>
#include<string>
#include<sstream>
using namespace std;
int getNumberFromString(string s) {
   stringstream str_strm;
   str_strm << s; //convert the string s into stringstream
   string temp_str;
   int temp_int,num,max=0;
   while(!str_strm.eof()) {
      str_strm >> temp_str; //take words into temp_str one by one
      if(stringstream(temp_str) >> temp_int) { //try to convert string to int
           num=temp_int;
           //check if number contain digit 9 or not.
            while (num > 0) 
           { 
               if (num % 10 == 9) 
                     break; 
  
                num = num / 10; 
            }
            //if number dont have 9 then among all the values return maxm value.
            if(!num>0)
            {
                if(temp_int>=max) max=temp_int;

                
            }
      }
      temp_str = ""; //clear temp string
   }
   return(max);//max value not containing 9 is returned.
}

int main() {
	//code
	int t,num;
	string str;
	
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    getline(cin,str);//getline consider \n as string so after reading t there is \n.
	    
	    getline(cin,str);//again it is used to read the input of next line.
	    
	   num=getNumberFromString(str);
	   cout<<num<<"  ";
	    
	}
	return 0;
}
