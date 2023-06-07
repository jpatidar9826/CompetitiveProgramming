#include<iostream>
using namespace std;

class Shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public :
    void initCounter(void){counter = 0;}
    void setprice(void);
    void displayprice(void);
};
void Shop :: setprice(void){
    cout<<"Enter ID of your item no "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter Price of your item"<<endl;
    cin>>itemPrice[counter];
    counter++;
}
void Shop :: displayprice(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The Price of item with id "<<itemId[i]<<" is "<<itemPrice[i]<<endl; 
    }
    
}

int main(){
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice(); 


    return 0;
}