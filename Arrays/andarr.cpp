#include <iostream>
using namespace std;

int check(int arr[], int n, int x)
{
    int s = 0;
    int e = n-1;

    while(s<=e)
    {
        int mid = s + (e-s)/2;

        if((s&mid) >= x)
        {
            return mid;
        }
        else if((s&mid&mid+1)>= x){
            // s = mid+1;
            return mid+1;
        }
        else{
            s = mid+1;
        }
    }
    return -1;
}

int main(){


   int arr[] = {3,7,9,16};

  // int x = 1;
   cout<<check(arr,4,1)<<endl;
   
    return 0;
}