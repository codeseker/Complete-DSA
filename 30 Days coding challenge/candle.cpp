#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }
    int maxNo = INT_MIN;
    for (int i = 0; i < n; i++)
    {
       maxNo = max(maxNo, arr[i]);
    }

   int count = 0;
   for(int i=0; i<n; i++){
       if(arr[i]==maxNo){
           count++;
       }
   }
   cout<<count<<endl;

    return 0;
}