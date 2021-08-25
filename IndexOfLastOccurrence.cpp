#include <bits/stdc++.h>
using namespace std;

int fun(vector<int> arr, int x)
{
    int low = 0;
    int high = arr.size() - 1;

    while(low <= high)
    {
        int mid = (low + high)/2;
        if(arr[mid] > x)
        {
            high = mid - 1;
        }
        else if(arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            if(mid == arr.size() - 1 || arr[mid+1] != x)
            {
                return mid;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
    return -1;
}

int main()
{
    // Pass a sorted vector and an item to search
    return 0;
}