#include <iostream>
using namespace std;

class X{
    private:
        int a;
    public:
        void setData(int var1){
            a=var1;
        }
        friend void printData(X); //friend function declaration
};

//friend function definition, outside the class
void printData(X o1){
    cout<<"The data is "<<o1.a<<endl;
}

int main()
{
    //object creation for classes
    X c1;
    c1.setData(24);
    printData(c1);

    return 0;
}