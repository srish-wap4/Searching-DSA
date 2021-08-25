#include <bits/stdc++.h>
using namespace std;

int funFirst(vector<int> arr, int x)
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
            if(mid == 0 || arr[mid - 1] != x)
            {
                return mid;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int funLast(vector<int> arr, int x)
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
            if(mid == arr.size() - 1 || arr[mid + 1] != x)
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

int fun(vector<int> arr, int x)
{
    int start = funFirst(arr, x);
    if(start == -1)
    {
        return 0;
    }
    return (funLast(arr, x) - start + 1);
}


int main()
{
    // Pass a sorted vector and an item to search
    return 0;
}