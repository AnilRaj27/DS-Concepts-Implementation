#include <bits/stdc++.h>
using namespace std;

// different solution

void find_min_max(vector<int> &v, int &min, int &max, int i)
{
    if (i == v.size())
        return;

    if (v[i] < min)
        min = v[i];
    if (v[i] > max)
        max = v[i];

    i++;
    find_min_max(v, min, max, i);
}

int main()
{

    vector<int> v = {1, 4, 3, -5, -4, 8, 6};

    int min = INT_MAX, max = INT_MIN, i = 0;
    find_min_max(v, min, max, i);

    cout << min << " " << max << endl;

    return 0;
}