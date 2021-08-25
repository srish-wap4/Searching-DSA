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
    }
}


int main()
{
    // Pass a sorted rotated vector and a key to search
    return 0;
}