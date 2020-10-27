#include<stdio.h>
#include <iostream>
#include<math.h>
#include<time.h>
using namespace std;

float function(float x,float y)
{
    float f;
    f=pow((1.5-x+x*y),2)+pow((2.25-x+x*y*y),2)+pow((2.625-x+x*y*y*y),2);
    return f;
}



int main()
{
    float step_size,x,y,curr_val,next_val,x_old,y_old;
    int flag0,flag1,flag2,flag3,count=0;
    cout<<"Enter the step size between 0.25 to 1:";
    cin>>step_size;
    cout<<"\n Enter the starting point between -5 to 5 : ";
    cin>>x>>y;
    if(x<-5 || x>5 || y<-5 || y>5) cout<<"\n Invalid starting point ";
    else
    {
        curr_val=function(x,y);
        while(1)
        {
            flag0=1;
            flag1=1;
            flag2=1;
            flag3=1;
            while(flag0||flag1||flag2||flag3)
            {
                x_old=x;
                y_old=y;
                srand(time(0));
                int k=(1+rand()%4);
                switch(k)
                {
                    case 1: if(x-step_size>-5 && x-step_size<5 && flag0==1){ x=x-step_size;
                            flag0=0;
                            }
                            break;
                    case 2:if(x+step_size>-5 && x+step_size<5 && flag1==1){ 
                            x=x+step_size;
                            flag1=0;
                           }
                            break;
                    case 3:if(y+step_size>-5 && y+step_size<5 && flag2==1){
                           y=y+step_size;
                           flag2=0;
                           }
                            break;
                    case 4:if(y-step_size>-5 && y-step_size<5 && flag3==1){ 
                        y=y-step_size;
                        flag3=0;
                       }
                            break;
                }
                next_val=function(x,y);
                if(next_val<curr_val) 
                {
                    count++;
                    break;
                }
                else
                {
                    x=x_old;
                    y=y_old;
                }
                
            }
            
            if(flag0==0 && flag1==0 && flag2==0 && flag3==0 && next_val>=curr_val)
            {
                cout<<count<<endl;
                cout<<curr_val<<endl;
                break;
            }
            
        }
        
    }
return 0;
}
