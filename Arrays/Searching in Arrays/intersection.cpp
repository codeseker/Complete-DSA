#include <iostream>
#include <vector>
using namespace std;

vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> v;
    int n = nums1.size();
    int m = nums2.size();

    int i=0;
    int j=0;

    while(i<n && j<m)
    {
        if(nums1[i] == nums2[j])
        {
            v.push_back(nums1[i]);
            i++;
            j++;
        }
        else if(nums1[i]>nums2[j])
        {
            i++;
        }
        else{
            j++;
        }
    }

  

    return v;
}

int main()
{

    return 0;
}