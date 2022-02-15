#include <iostream>
using namespace std;


void printArray(int arr[], int n)
{
    cout<<"size of array "<<n<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool Search(int arr[], int n, int key)
{
    printArray(arr,n);
    // base case
    if(n == 0)
    {
        return false;
    }

    // recursive call
    if(arr[0] == key)
    {
        return true;
    }
    bool ans = Search(arr+1,n-1,key);
    return ans;
}
bool binarySearch(int arr[], int s, int e, int k, int n)
{
    // printArray(arr,n);
    // base case
    if(s>e)
    {
        return false;
    }
    int mid = s+(e-s)/2;
    if(arr[mid] == k)
    {
        return true;
    }

    if(arr[mid] > k){
        // search in left part
        return binarySearch(arr,s,mid-1,k,n);
    }
    else{
        // search in right part
        return binarySearch(arr,mid+1,e,k,n);
    }
}

int main(){

    int arr[] = {2,4,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
  
    bool ans = binarySearch(arr,0,n-1,-45,n);

    if(ans)
    {
        cout<<"Element is found"<<endl;
    }
    else{
        cout<<"Element is not found"<<endl;
    }

    return 0;
}