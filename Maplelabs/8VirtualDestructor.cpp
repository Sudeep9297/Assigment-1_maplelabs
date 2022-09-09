/*  The functionality of destructor is opposite of constructor in the derived classes. 
The base class "constructor is called before derived class "constructor" 
while derived class "destructor" is called before base class "destructor"   */

#include <iostream>
using namespace std;

class Base{
    public:
        Base(){
            cout<<"Base contructor is called"<<endl;
        }

         ~Base(){
            cout<<"Base destructor is called"<<endl;
        }

        void fun(){
            cout<<"Base fn"<<endl;
        }
};

class Derived:public Base{
    public:

        void fun(){
            cout<<"Derived fn"<<endl;
        }

        Derived(){
            cout<<"Derived constructor is called"<<endl;
        }

        ~Derived(){
            cout<<"Derived destructor is called"<<endl;
        }
};

int main()
{
    Base *b1=new Base();      //Base class "constructor" invoked only
    Base *b2=new Derived();   //Base class "constructor" invoked first then Derived class "constructor" invoked
    Derived *d=new Derived();   //Base class "constructor" invoked first then Derived class "constructor" invoked

    b1->fun();      //base class function called only 
    b2->fun();      //base class function called only as the pointer is of type "base"
    d->fun();       //derived class function called only as the pointer is of type "derived"

    delete b1;      //Base class "destructor" will be called only  
    delete b2;      //Derived class "destructor" will be called first then Base class "destructor" because "virtual" is used
    delete d;       //Derived class "destructor" will be called first then Base class "destructor" because "virtual" is used

    return 0;
}

