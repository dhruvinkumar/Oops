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
    Employee e[3];
    // harry.id = 1;
    // harry.count = 1; // cannot do this as id and count are private
    for(int i=0;i<3;i++){
    e[i].setData();
    e[i].getData();
    Employee::getCount();
}
    

    
    return 0;
}
