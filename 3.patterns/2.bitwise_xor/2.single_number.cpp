#include <bits/stdc++.h>
using namespace std;

int main()
{
    // In a non-empty array of integers, every number appears twice except for one, find that single number.
    vector<int> arr = {1, 4, 2, 1, 3, 2, 3};

    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum ^= arr[i];
    }

    cout << sum << endl;

    return 0;
}