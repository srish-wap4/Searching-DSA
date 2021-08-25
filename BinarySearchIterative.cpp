#include <bits/stdc++.h>
using namespace std;

int fun_iterative(vector<int> arr, int x)
{
    int low = 0, high = arr.size() - 1;
    while(low <= high)
    {
        int mid = (low + high)/2;
        if(arr[mid] == x)
        {
            return mid;
        }
        else if(arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int fun_recursive(int low, int high, vector<int> arr, int x)
{
    if(low > high)
    {
        return -1;
    }

    int mid = (low + high)/2;
    if(arr[mid] == x)
    {
        return mid;
    }
    else if(arr[mid] < x)
    {
        return fun_recursive(mid+1, high, arr, x);
    }
    else
    {
        return fun_recursive(low, mid-1, arr, x);
    }
}

int main()
{
    // Pass a sorted vector and an item to search
    return 0;
}