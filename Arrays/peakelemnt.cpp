#include <iostream>
using namespace std;

int peak(int arr[], int n)
{
    int s = 0;
    int e = n-1;

    while(s<e)
    {
        int mid = s + (e-s)/2;
        if(arr[mid]<arr[mid+1])
        {
            s = mid+1;
        }
        else{
            e = mid;
        }
    }
    return s;
}

int main(){

    int arr[] = {24,69,100,99,79,78,67,36,26,19};
    cout<<peak(arr,10)<<endl;

    return 0;
}