/*
Abstract Class-An abstract class is a class that contains at least one pure virtual function 
                 and these classes cannot be instantiated   (objects cannot be created).
Virtual Function-A virtual function is a member function that is declared within a base class 
                 and is redefined(overridden) by the derived class.
Pure Virtual Function-A pure virtual function (or abstract function) is a virtual function with no definition/logic.
                      It is declared by assigning 0 at the time of declaration.
                      */

#include <iostream>
using namespace std;

//abstract class
class Shape{
    protected: 
        int width;
        int height;

    public:
        virtual int area()=0; //pure virtual function(abstract function) declared

        //function to set width
        void setWidth(int w){
            width=w;
        }

        //function to set height
        void setHeight(int h){
            height=h;
        }
};

//rectangle inherits shape 
class Rectangle: public Shape{
    public:
        int area(){
            return (width*height);
        }
};

//triangle inherits shape
class Triangle : public Shape{
    public:
        int area(){
            return ((width*height)/2);
        }
};

int main()
{
    //object creation
    Rectangle R;
    Triangle T;

    R.setWidth(4);
    R.setHeight(5);
    cout<<"The area of Rectangle is "<<R.area()<<endl;

    T.setWidth(10);
    T.setHeight(20);
    cout<<"The area of Triangle is "<<T.area()<<endl;

    return 0;
}