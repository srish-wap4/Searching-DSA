#include <bits/stdc++.h>
using namespace std;

bool fun(vector<int> v, int sum)
{
    int low = 0, high = v.size() - 1;
    while(low < high)
    {
        if(v[low] + v[high] == sum)
        {
            return true;
        }
        else if(v[low] + v[high] < sum)
        {   
            low = low + 1;
        }   
        else
        {
            high = high - 1;
        }
    }
    return false;
}

int main()
{
    // Pass a vector to the function
    return 0;
}