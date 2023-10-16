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
        cout<<"The id of this employee is "<<id<<" and this is employee no "<<count<<endl;
    }
};

int Employee:: count = 0;
int main(){
    Employee hari,rohan,lavish;
    // harry.id = 1;
    // harry.count = 1; // cannot do this as id and count are private
    
    hari.setData();
    hari.getData();
    
    rohan.setData();
    rohan.getData();
    
    lavish.setData();
    lavish.getData();
    

    
    return 0;
}
