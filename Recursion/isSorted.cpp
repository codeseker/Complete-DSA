#include <iostream>
using namespace std;

bool isSorted(int arr[], int n)
{
    // base case
    if(n<2)
    {
        //cout<<"Sorted araay"<<endl;
        return true;
    }
    // recursive call
    if (arr[0] > arr[1])
    {
        return false;
    }
     bool ans =  isSorted(arr+1, n-1);
     return ans;
}

int main()
{

    int arr[] = {2,4,6,29,11,13};
    int n = sizeof(arr)/sizeof(arr[0]);

   bool ans =  isSorted(arr,n);
   cout<<ans<<endl;

    return 0;
}