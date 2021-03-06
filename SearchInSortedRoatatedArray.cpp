#include <bits/stdc++.h>
using namespace std;

int fun(vector<int> arr, int x)
{
    int low = 0;
    int high = arr.size() - 1;
    while(low <= high)
    {
        int mid = (low + high)/2;
        if(arr[mid] == x)
        {
            return mid;
        }

        if(arr[low] < arr[mid])
        {
            if(x >= arr[low] && x < arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if(x > arr[mid] && x <= arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}


int main()
{
    // Pass a sorted rotated vector and a key to search
    return 0;
}