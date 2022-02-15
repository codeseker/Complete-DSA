#include <iostream>
using namespace std;

void rotate(int arr[], int n, int k, int ans[])
{
    //int ans[n];
    int j=0;
    int i=k+1;
    while(i<n)
    {
        ans[j] = arr[i];
        i++;
        j++;
    }
    i = 0;
    while(i<=k)
    {
        ans[j] = arr[i];
        i++;
        j++;
    }
}

int main(){


    int arr[] = {-1,-100,3,99};
    int ans[4];
    rotate(arr,4,2,ans);
    for(int i=0; i<4; i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}