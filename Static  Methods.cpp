#include <iostream>

using namespace std;

class Employee{
    int id;
    static int count;
    public:
 
    void setData(){
        cout<<"Enter the Id ";
        cin>>id;
        count++;
    }
    void getData(){
        cout<<"The id of this employee is "<<id<<endl;
    }
    
    static void getCount(){
        cout<<"The value of count is "<<count<<endl;
    }
};

int Employee:: count = 0;
int main(){
    Employee hari,rohan,lavish;
    // harry.id = 1;
    // harry.count = 1; // cannot do this as id and count are private
    
    hari.setData();
    hari.getData();
    Employee::getCount();
    
    rohan.setData();
    rohan.getData();
    Employee::getCount();
    
    lavish.setData();
    lavish.getData();
    Employee::getCount();
    

    
    return 0;
}
