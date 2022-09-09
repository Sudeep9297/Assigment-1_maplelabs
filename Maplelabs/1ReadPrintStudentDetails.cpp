#include <iostream>
#define MAX 10 //the max number of records that can be entered 
using namespace std;

class student{
    private:
        char name[30];
        int rollNo;
        char contactNo[10];

    public:
        void setStudent();  //member function declaration for entering student details
        void getStudent();  //member function declaration for printing student details
};

//member function definition for entering student details
void student::setStudent(){
    cout<<"Enter the name of the student: ";
    cin>>name;
    cout<<"Enter the roll no: ";
    cin>>rollNo;
    cout<<"Enter the contact no: ";
    cin>>contactNo;
}

//member function definition for printing student details
void student::getStudent(){
    cout<<"Student's Name: "<<name<<"\n"<<"Roll no: "<<rollNo<<"\n"<<"Contact No:"<<contactNo<<endl;
}

int main()
{
    student st[MAX];  //creation of array object
    int n;

    cout<<"Enter the number of students: ";
    cin>>n;

    for(int i=0;i<n;i++){
        st[i].setStudent(); 
    }

    for(int i=0;i<n;i++){
        st[i].getStudent();
    }

    return 0;
}