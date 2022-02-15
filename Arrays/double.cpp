#include <iostream>
using namespace std;
#include<vector>

bool check(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(2*arr[i] == arr[j])
            {
                return true;
                break;
            }
        }
    }
    return false;
}

int main(){


    int arr[] = {1,7,14,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<check(arr,n);

    return 0;
}