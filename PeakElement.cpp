#include <bits/stdc++.h>
using namespace std;

int fun(vector<int> arr)
{
    int low = 0;
    int high = arr.size() - 1;
    while(low <= high)
    {
        int mid = (low + high)/2;
        if((arr[mid] >= arr[mid-1] || mid == 0) && (mid == arr.size() - 1 || arr[mid] >= arr[mid+1]))
        {
            return arr[mid];
        }
        else if(mid > 0 && arr[mid - 1] > arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
}

int main()
{
    // Pass a vector to the function
    vector<int> v = {40, 70};
    cout << fun(v) << "\n";
    return 0;
}