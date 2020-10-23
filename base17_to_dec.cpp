
#include <iostream>
#include<string>
#include<math.h>
using namespace std;
int convert_to_decimal( char c)
{
    switch(c)
    {
        case '0':return 0;
        case '1':return 1;
        case '2':return 2;
        case '3':return 3;
        case '4':return 4;
        case '5':return 5;
        case '6':return 6;
        case '7':return 7;
        case '8':return 8;
        case '9':return 9;
        case 'A':return 10;
        case 'B':return 11;
        case 'C':return 12;
        case 'D':return 13;
        case 'E':return 14;
        case 'F':return 15;
        case 'G':return 16;
        
    }
}

int main()
{
    string str;
    int j,base=0;
    long long sum=0;
    cin>>str;
    for(int i=str.size()-1;i>=0;i--)
    {
        j=convert_to_decimal(str[i]);
        sum=sum+j*pow(17,base);
        base++;
        
        
    }
    cout<<sum<<endl;
}
