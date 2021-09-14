#include <bits/stdc++.h>
using namespace std;

int main()
{
    // For a given positive number N in base-10, return the complement of its binary representation as a base-10 integer.

    int n = 8;
    int count = 0;
    int val = 0;
    int temp = n;
    while (temp != 0)
    {
        val += pow(2, count);
        temp = temp / 2;
        count++;
    }

    int res = n ^ val;
    cout << "Bit complement of 8: " << res << endl;

    return 0;
}