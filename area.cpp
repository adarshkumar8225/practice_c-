#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle{
    public:
    int width;
    int height;
    void read_input(){
       cin>>width>>height;
    }
   
    void display(){
        cout<<width<<" "<<height<<endl;
    }

};
class circle{
    public:
    int radius;
   
    void read_input(){
       cin>>radius;
    }
   
    void display(){
        cout<<radius <<endl;
    }

};

class RectangleArea : public Rectangle{ //inheritance 
    public:
     void display(){
         int area=width*height;// access the varioble of parent class
         cout<<area<<endl;
     }
};
class circleArea : public circle{ //inheritance 
    public:
     void display(){
         float area=3.14* radius*radius;// access the varioble of parent class
         cout<<area<<endl;
     }
};


int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    circleArea c_area;
    /*
     * Read the width and height
     */
    r_area.read_input();
    c_area.read_input();
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    c_area.circle::display();
    /*
     * Print the area
     */
    r_area.display();
    c_area.display();
    return 0;
}
