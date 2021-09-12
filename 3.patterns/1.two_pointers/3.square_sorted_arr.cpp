#include <bits/stdc++.h>
using namespace std;

int main()
{

    //1. Given a sorted array, create a new array containing squares of all the numbers of the input array in the sorted order.

    vector<int> arr = {-2, -1, 0, 2, 3};

    int n = arr.size();
    vector<int> squares(n);

    int start = 0, end = n - 1;
    int j = n - 1;

    while (j != -1)
    {
        int leftSquare = arr[start] * arr[start];
        int rightSquare = arr[end] * arr[end];

        if (leftSquare <= rightSquare)
        {
            squares[j] = rightSquare;
            end--;
        }
        else if (leftSquare > rightSquare)
        {
            squares[j] = leftSquare;
            start++;
        }
        j--;
    }

    for (auto x : squares)
        cout << x << " ";
    cout << endl;

    return 0;
}
