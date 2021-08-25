#include <bits/stdc++.h>
using namespace std;
// Assumption: Array is sorted

bool isPair(vector<int> arr, int low, int high, int sum)
{
    while(low < high)
    {
        if(arr[low] + arr[high] == sum)
        {
            return true;
        }
        else if(arr[low] + arr[high] > sum)
        {
            high = high - 1;
        }
        else
        { 
            low = low + 1;
        }
    }
    return false;
}

bool isTriplet(vector<int> v, int sum)
{
    for(int i = 0; i < v.size(); ++i)
    {
        if(isPair(v, i + 1, v.size() - 1, sum - v[i]))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    // pass a sorted vector and a sum
    return 0;
}