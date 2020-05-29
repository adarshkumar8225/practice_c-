#include <iostream>
#include <cstdio>
#include <cmath>
#include <stdint.h>
using namespace std;

/*void round_nplaces(double &value, const uint32_t &to)
{
    uint32_t places = 1, whole = *(&value);
    for(uint32_t i = 0; i < to; i++) places *= 10;
    value -= whole; //leave decimals
    value *= places;  //0.1234 -> 123.4
    value  = round(value);//123.4 -> 123
    value /= places;  //123 -> .123
    value += whole; //bring the whole value back
}*/

int main() {
    // Complete the code.
    int a;
    long b;
    char c;
    float d;
    double e;
    cin>>a>>b>>c>>d>>e;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    printf("%.3f\n",d);//round off floating point no. to 3 decimal places.
    printf("%.9lf\n",e); //round of double 
   // cout<<e<<endl;
    return 0;
}
