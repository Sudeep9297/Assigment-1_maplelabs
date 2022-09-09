#include <iostream>
using namespace std;

class Student{
    private:
        int rollNo;
        float percent;

        //private member functions
        void inputOn(){
            cout<<"input on..."<<endl;
        }

        void inputOff(){
            cout<<"input off..."<<endl;
        }

    public:
        void setStudent(); 
        void getStudent();
};

//public member functions 
void Student::setStudent(){
    inputOn();          //calling first private member function
    cout<<"enter the roll no: ";
    cin>>rollNo;
    cout<<"enter the percentage: ";
    cin>>percent;
    inputOff();         //calling second private member function
}

void Student::getStudent(){
    cout<<"Roll No: "<<rollNo<<" "<<"Percentage: "<<percent<<endl;
}

int main()
{
    Student s;    //creating object of class Student
    s.setStudent();   //entering Student details 
    s.getStudent();   //printing Student details
    return 0;
}