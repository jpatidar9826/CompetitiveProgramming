#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count;
    public:
    void setdata(void){
        cout<<"Enter the Id"<<endl;
        cin>>id;
        count++;
    }
    void getdata(void){
        cout<<"The Employee id is "<<id<<" and this isempolyee no "<<count;
    }
};

int Employee:: count;

int main(){
    Employee Harry,rohan,lovish;
    Harry.setdata();
    Harry.getdata();

    lovish.setdata();
    lovish.getdata();

    rohan.setdata();
    rohan.getdata();
    return 0;
}