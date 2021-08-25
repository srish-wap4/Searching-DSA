#include <bits/stdc++.h>
using namespace std;

// Returns the floor of the square root value
int fun(int x)
{
    int low = 0, high = x, ans = -1;
    while(low <= high)
    {
        int mid = (low + high)/2;
        if(mid*mid == x)
        {
            return mid;
        }
        else if(mid*mid < x)
        {
            low = mid + 1;
            ans = mid;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

int main()
{
    // Pass the value for which the square root has to be computed
    return 0;
}