#include <iostream>
using namespace std;



int main(){


    int num = 5;

    cout<<num<<endl;
  

    // Adress operator -> &
    cout<<"Adress of num is "<< &num<<endl;

    int *ptr = &num;
    cout<<"Now using pointer "<<endl;
    cout<<"Address is : "<< ptr<<endl;
    cout<<"value is : "<< *ptr<<endl;

    return 0;
}