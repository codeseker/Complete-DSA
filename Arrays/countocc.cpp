#include <iostream>
using namespace std;

int leftSearch(int arr[], int n, int x)
{
    int s = 0;
    int e = n-1;
    int ans = 0;
    while(s<=e)
    {
        int mid = s + (e-s)/2;
        if(arr[mid] == x)
        {
            ans = arr[mid];
            // arr[mid] = -1;
            e = mid-1;
        }
        else if(arr[mid]>x)
        {
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return count;
}
int rightSearch(int arr[], int n, int x)
{
    int s = 0;
    int e = n-1;
    int ans = 0;
    while(s<=e)
    {
        int mid = s + (e-s)/2;
        if(arr[mid] == x)
        {
            ans = arr[mid];
            // arr[mid] = -1;
            s = mid+1;
        }
        else if(arr[mid]>x)
        {
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return count;
}



int main(){

    
    int arr[] = {1, 1, 2, 2, 2, 2, 3};
    cout<<leftSearch(arr,6,2)<<endl;
    cout<<rightSearch(arr,6,2)<<endl;



    return 0;
}