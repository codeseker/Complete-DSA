#include <iostream>

using namespace std;


int main(){

    int b,n,m;
    cin>>b;

    int key[n];
    for(int i=0; i<n; i++)
    {
        cin>>key[i];
    }
    int mouse[m];
     for(int i=0; i<m; i++)
    {
        cin>>mouse[i];
    }


    int sum = 0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            sum = key[i]+mouse[j];
            cout<<sum<<" ";
        }
    }

    return 0;

}