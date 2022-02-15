#include <iostream>
using namespace std;

int sumArr(int arr[], int size, int intialSum)
{
    // base case
    if(size == 0)
    {
        return 0;
    }
    if(size == 1)
    {
        return arr[0];
    }
    // recursive call
    int sum = intialSum + arr[0];
    int ans = sumArr(arr+1,size-1,sum);

    return ans;

}

int sum2(int arr[], int n, int i, int iSum)
{
    if(n == 0)
    {
        return 0;
    }
    if(n == 1)
    {
        return arr[0];
    }

    int sum = iSum+arr[i];
    int ans = sum2(arr+1,n-1,i++,sum);
    return ans;
}

int main(){


     int arr[] = {3,2,5,1,6};
     int size = sizeof(arr)/sizeof(arr[0]);

     int ans = sumArr(arr,size,0);

     cout<<ans<<endl;
     cout<<sum2(arr,size,0,0);
    return 0;
}