#include <bits/stdc++.h>
using namespace std;

int binSearch(int low, int high, vector<int> arr, int key)
{
    while(low <= high)
    {
        int mid = (low + high)/2;
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int fun(vector<int> arr, int key)
{
    if(arr[0] == key)
    {
        return 0;
    }

    int i = 1;
    while(arr[i] < key)
    {
        i = i*2;
    }

    if(arr[i] == key)
    {
        return i;
    }

    return binSearch(i/2 + 1, i - 1, arr, key);
}

int main()
{
    // Pass a sorted vector and the key to be searched for
    return 0;
}