#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
        int rollNo;
    public:
        void setStudent(int);
};

//public member function accessing private data members
void Student::setStudent(int rno){
    rollNo=rno;
    cout<<"Student's roll number: "<<rollNo<<endl;
}

int main()
{
    Student st;  //object created

    //calling function
    st.setStudent(1001);   
    return 0;
}