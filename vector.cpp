#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{

    // vector < dat_type > name(size, value)
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(70);

    // for (auto i : a)
    // {
    //     cout << i << " ";
    // }

    // cout << endl;

    cout << "Before Popback: " << endl;
    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    a.pop_back(); // last ki value delte ho jayegi

    cout << "After Popback: " << endl;
    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    int sum = accumulate(a.begin(), a.end(), 0);
    cout << sum << endl;

    

   


    return 0;
}