#include <iostream>

using namespace std;

int pof2(int n)
{
    if(n == 0)
    {
        return 1;
    }

    int smallProb = pof2(n-1);
    return 2*smallProb;
}

int main(){

    int n;
    cin>>n;

    int ans = pof2(n);
    cout<<"Power of 2^"<<n<<" is " <<ans<<endl;

    return 0;
}