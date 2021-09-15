#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4};

    int start = 0, end = v.size() - 1;
    while (start < end)
    {
        swap(v[start], v[end]);
        start++;
        end--;
    }

    for (auto x : v)
        cout << x << " ";

    return 0;
}
