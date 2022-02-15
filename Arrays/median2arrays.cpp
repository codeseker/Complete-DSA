#include <iostream>
using namespace std;

double median(int arr1[], int n, int arr2[], int m)
{
    int N = n+m;
    int arr3[N];
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
            k++;
        }
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
    float ans = 0;
    if(N%2 != 0)
    {
         int mid = (N)/2;
         float c = arr3[mid];
         ans = c;
         return ans;
    }
    else{
        int mid = (N)/2;
        float a = arr3[mid-1];
        float b = arr3[mid];
        ans = (a+b)/2;
        return ans;
        
    }
}

int main(){


    int arr1[] = {1,2};
    int arr2[] = {3,4};

    cout<<median(arr1,2,arr2,2)<<endl;

    return 0;
}