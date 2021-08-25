#include <bits/stdc++.h>
using namespace std;

int fun(vector<int> arr)
{
    int low = 0;
    int high = arr.size() - 1;
    
    while(low <= high)
    {
        int mid = (low + high)/2;
        if(arr[mid] == 0)
        {
            low = mid + 1;
        }
        else
        {
            if(mid == 0 || arr[mid - 1] == 0)
            {
                return (arr.size() - mid);
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return 0;
}

int main()
{
    // Pass a sorted binary vector
    return 0;
}