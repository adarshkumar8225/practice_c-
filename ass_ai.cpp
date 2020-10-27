#include<stdio.h>
#include <iostream>
#include<math.h>
#include<time.h>
using namespace std;
//function to calculate value of expression for given x and y.
float function(float x,float y)
{
    float f;
    f=pow((1.5-x+x*y),2)+pow((2.25-x+x*y*y),2)+pow((2.625-x+x*y*y*y),2);
    return f;
}



int main()
{
    float step_size,x,y,curr_val,next_v[4];
    int flag0,flag1,count=0;
    cout<<"Enter the step size between 0.25 to 1:";
    cin>>step_size;
    cout<<"\n Enter the starting point between -5 to 5 : ";
    cin>>x>>y;
    if(x<-5 || x>5 || y<-5 || y>5) cout<<"\n Invalid starting point ";
    else
    {
        srand(time(0));
        curr_val=function(x,y);
        while(1)
        {
            flag0=1;
            flag1=1;
            //compute all the values of four neighbour points if x and y lies in the range -5 to 5.
            if(x-step_size>-5 && x-step_size<5)
            next_v[0]=function(x-step_size,y);
            else next_v[0]=curr_val;
            if(x+step_size>-5 && x+step_size<5)
            next_v[1]=function(x+step_size,y);
            else next_v[0]=curr_val;
            if(y-step_size>-5 && y-step_size<5)
            next_v[3]=function(x,y-step_size);
            else next_v[0]=curr_val;
            if(y+step_size>-5 && y+step_size<5)
            next_v[2]=function(x,y+step_size);
            else next_v[0]=curr_val;
                //check if any value is less than current value............
            for(int j=0;j<4;j++)
            {
                    
                if(next_v[j]<curr_val) flag0=0;
                else flag1=0;
                    
            }
           // if no value is less than current value just stop.
            if(flag0==1)
            {
                cout<<count<<endl;
                cout<<curr_val<<endl;
                break;
            }
            //else randomly select a neighbour with value less than current value
            else
            {
                while(1)
                {
                    
                    int k=(1+ rand()%4);// way to store random number as int 
                    //if random number has less value than current value
                    if(next_v[k-1]<curr_val)
                    {
                        curr_val=next_v[k-1];//update current value
                        //update x and y value.
                        switch(k)
                        {
                            case 1: x=x-step_size;
                                    break;
                            case 2: x=x+step_size;
                                    break;
                            case 3: y=y+step_size;
                                    break;
                            case 4: y=y-step_size;
                                    break;
                        }
                        count++;//increment count value to count the no. of points taken
                        break;
                    }
                }
            }
        }
    }
   return 0;
}
