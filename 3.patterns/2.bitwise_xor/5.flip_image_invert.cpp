#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Given a binary matrix representing an image, we want to flip the image horizontally, then invert it.

    vector<vector<int>> arr = {{1, 0, 1}, {1, 1, 1}, {0, 1, 1}};

    for (int i = 0; i < arr.size(); i++)
    {
        reverse(arr[i].begin(), arr[i].end());
    }

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            arr[i][j] = arr[i][j] ^ 1;
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}