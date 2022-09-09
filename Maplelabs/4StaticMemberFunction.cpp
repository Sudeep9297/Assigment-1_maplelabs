#include <iostream>
using namespace std;

class Student{
    private:
        static int count; 
        int rollNo;
        char name[30];

    public:
        void setStudent();
        void getStudent();
        static int studentCount(); //static member function declaration
};

int Student::count=0; //initialising static data member

//member function to enter student details
void Student::setStudent(){
    cout<<"Enter the student's roll no: ";
    cin>>rollNo;
    cout<<"Enter the student's name: ";
    cin>>name;
    count++;
}

//member function to print student details
void Student::getStudent(){
    cout<<"Student's Roll no: "<<rollNo<<endl;
    cout<<"Student's Name: "<<name<<endl;
}

//static member function to return total count of student
int Student::studentCount(){
    return count;  
}

int main()
{
    Student s1,s2,s3; //object creation

    s1.setStudent(); 
    s2.setStudent();
    s3.setStudent();

    s1.getStudent();
    s2.getStudent();
    s3.getStudent();

    cout<<"The total count of the student is "<<Student::studentCount()<<endl;
    
    return 0;
}