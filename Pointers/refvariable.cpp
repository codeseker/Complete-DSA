#include <iostream>
using namespace std;

void update(int n)
{
    n++;
}
void update1(int& n)
{
    n++;
}

int main(){

    // int i = 5;
    // // create a ref variable

    // int& j = i;

    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;
    // j++;
    // cout<<i<<endl;


    // int k = 10;
    // int& h = k;
    // h++;
    // cout<<h<<endl;
 
    int n = 5;
    cout<<"Before "<< n <<endl;
    update1(n);
    cout<<"After "<< n<<endl;
   
    return 0;
}