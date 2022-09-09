#include <iostream>
using namespace std;

class Demo{
    private:
        int a;
    
    public:
        void set_data(int);
        void get_data() const;
};

//non-const member function
void Demo::set_data(int data){
    a=data;
}

//const member function
void Demo::get_data() const{
    //a++;        --->Error while attempting to modify the member
    cout<<a<<endl;
}   

int main()
{
    Demo d;
    d.set_data(10);
    d.get_data();

    return 0;
}