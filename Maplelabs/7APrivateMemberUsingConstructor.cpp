#include <iostream>
using namespace std;

class Student{
    private:
        int rollNo;
    public:
        Student(int);
};

//Constructor invoked just as object created
Student::Student(int rno){
    rollNo=rno;
    cout<<"Student's roll no: "<<rollNo<<endl;
}

int main()
{
    Student st(45);   //object created

    return 0;
}

/*
Constructor gets automatically called as the object is created,while functions need to be called after the creation of object.
Constructors can be used for efficient memory management, which is not possible with functions.
Because Destructor can be used to destroy the constructors when not needed, which is not possible in functions, which causes memory leak otherwise.

So accessing private members with constructor is efficient to use than without constructor*/