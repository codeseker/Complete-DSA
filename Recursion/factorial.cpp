#include <iostream>
using namespace std;

int fact(int n)
{
    // base case
    if(n == 0)
    {
        return 1;
    }

    int chotii = fact(n-1);
    int badi = n*chotii;

    return badi;
}

int main(){

    int n;
    cin>>n;

    int ans = fact(n);

    cout<<"Ans is "<< ans<<endl;


    return 0;
}