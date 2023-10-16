
#include <iostream>

using namespace std;

class Shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
        void initCounter(void){
            counter = 1;
        }
    void setPrice(){
        cout<<"Enter Id of your item no "<<counter<<endl;
        cin>>itemId[counter];
        cout<<"Enter Price of your item no "<<counter<<endl;
        cin>>itemPrice[counter];
        counter++;
    }
    
    void displayPrice(){
        
        for(int i=1;i<counter;i++){
            cout<<"The Price of iten with Id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
        }
    }
};

int main()
{
  Shop dukan;
  dukan.initCounter();
  dukan.setPrice();
  dukan.setPrice();
  dukan.setPrice();
  dukan.setPrice();
  dukan.displayPrice();

    return 0;
}
