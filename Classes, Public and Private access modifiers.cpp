
#include <iostream>

using namespace std;

class Employee{
  
  private:
    int a,b,c;
  public:
    int d,e;
    void setData(int x,int y,int z);
    void getData(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of a is "<<b<<endl;
        cout<<"The value of a is "<<c<<endl;
        cout<<"The value of a is "<<d<<endl;
        cout<<"The value of a is "<<e<<endl;
    }
};

void Employee::setData(int x,int y,int z){
    a=x;
    b=y;
    c=z;
} 
int main()
{
    Employee e1;
    e1.d = 40;
    e1.e = 50;
    e1.setData(10,20,30);
    e1.getData();
    return 0;
}
