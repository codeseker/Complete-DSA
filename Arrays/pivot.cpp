#include <iostream>
using namespace std;

int pivot(int arr[], int n)
{
   long long int sum = 0;
   for(int i=0; i<n; i++)
   {
       sum+=arr[i];
   }

   long long int lsum = 0;
   long long int rsum = sum;

   for(int i=0; i<n; i++)
   {
       rsum = rsum-arr[i];

       if(lsum == rsum)
       {
          return i;
       }

       lsum += arr[i];
   }
   return -1;
}

int main(){

    int arr[] = {1,7,3,6,5,6};
    cout<<pivot(arr,6)<<endl;

    return 0;
}