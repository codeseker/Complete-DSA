#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count = 1;
    int max = 0;
    int id = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if(arr[i] == arr[i+1]){
            count++;
        }
        else{
            if(count>max){
                max = count;
                count = 1;
                id = arr[i];
            }
        }
    }

    cout << id << endl;

    return 0;
}