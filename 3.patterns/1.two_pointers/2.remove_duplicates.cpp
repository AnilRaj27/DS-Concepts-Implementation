#include <bits/stdc++.h>
using namespace std;

int main()
{

    //1. Remove duplicates
    vector<int> arr = {2, 3, 3, 3, 6, 9, 9};

    int j = 0;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            arr[++j] = arr[i + 1];
        }
    }

    cout << j + 1 << endl;

    //2. Given an unsorted array of numbers and a target ‘key’, remove all instances of ‘key’ in-place
    arr = {2, 11, 2, 2, 1};
    int key = 2;

    j = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != key)
        {
            arr[j] = arr[i];
            j++;
        }
    }

    cout << j << endl;

    return 0;
}