#include <iostream>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
   // int arr3[n+m] = {0};

    int i=0;
    int j=0;
     int k=0;

     while(i<n && j<m)
     {
         if(arr1[i]<=arr2[j])
         {
             arr3[k] = arr1[i];
             i++;
             k++;
         }
         else{
             arr3[k] = arr2[j];
             j++;
             k++;         }
     }
     while(i<n)
     {
         arr3[k] = arr1[i];
         i++;
         k++;
     }
     while(j<m)
     {
         arr3[k] = arr2[j];
         j++;
         k++;
     }
}


int main(){

    
     int arr1[3] = {1,2,3};
     int arr2[3] = {2,5,6};
    
    int arr3[6] = {0};
     merge(arr1,3,arr2,3, arr3);
     for(int i=0; i<6; i++)
     {
         cout<<arr3[i]<<" ";
     }


    return 0;
}