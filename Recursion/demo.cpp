#include <iostream>
using namespace std;


void reachHome(int src, int dest)
{
    cout<<"Source "<< src << "destination "<< dest <<endl;

    if(src == dest)
    {
        cout<<"at hone"<<endl;
        return;
    }

    src++;

    reachHome(src,dest);
}


int main(){

   
    int src = 1;
    int dest = 10;

    reachHome(src, dest);

    return 0;
}