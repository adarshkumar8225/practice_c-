#include <iostream>
#include <cstring>
#include <string>//consist of substr() function.
#include <string.h>
using namespace std;

int main() {
	// Complete the program
    string str1,str2;//here we have taken a predefined class string 
    cin>>str1>>str2;
    cout<<str1.size()<<" "<<str2.size()<<endl;//size() works with string class.If we take char array to store string then size() function will not work.
    cout<<str1+str2<<endl;
    cout<<str2.substr(0,1)+str1.substr(1,str1.size()-1)<<" "<<str1.substr(0,1)+str2.substr(1,str2.size()-1)<<endl;
  
    return 0;
}
