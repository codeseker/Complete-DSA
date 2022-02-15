#include <iostream> 
using namespace std;

int firstocc(int arr[], int n, int key)
{
    int s = 0;
    int e = n-1;
    int ans = -1;
    while(s<=e)
    {
        int mid = s + (e-s)/2;
        if(arr[mid] == key)
        {
            ans = mid;
            e = mid-1;
        }
         else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}
int lastocc(int arr[], int n, int key)
{
    int s = 0;
    int e = n-1;
    int ans = -1;
    while(s<=e)
    {
        int mid = s + (e-s)/2;
        if(arr[mid] == key)
        {
            ans = mid;
            s = mid+1;
        }
         else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}

int main(){

    int arr[] = {1,2,3,3,3,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<firstocc(arr,n,3)<<endl;
    cout<<lastocc(arr,n,3)<<endl;


    return 0;
}