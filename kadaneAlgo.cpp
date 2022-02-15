#include <iostream>
#include <climits>
using namespace std;

int maxi(int arr[], int n)
{
    int curr = 0;
    int mx = INT_MIN;

    for(int i=0; i<n; i++)
    {
        curr = curr + arr[i];
        if(curr<arr[i])
        {
            curr = arr[i];
        }
        if(mx<curr)
        {
            mx = curr;
        }
    }
    return mx;
}

int main(){

    int arr[] = {-1,-2,-3,-4};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<maxi(arr,n);


    return 0;
}