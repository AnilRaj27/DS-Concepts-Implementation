#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Given an array of n-1n−1 integers in the range from 11 to nn, find the one number that is missing from the array.

    // 1. Math approach
    vector<int> arr = {1, 5, 2, 6, 4};

    int n = arr.size() + 1;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
        sum += arr[i];

    int ans = (n * (n + 1) / 2) - sum;
    cout << ans << endl;

    // 2. XOR approach
    // Explaination: https://stackoverflow.com/a/18335854/8806485
    // XOR is Associative & Commutative, which means:
    // (a ^ b) ^ c = a ^ (b ^ c)
    // a ^ b = b ^ a

    sum = 1;
    for (int i = 2; i <= n; i++)
        sum ^= i;
    // cout << sum << endl;

    int x2 = 0;
    for (int i = 0; i < arr.size(); i++)
        x2 ^= arr[i];
    // cout << x2 << endl;
    int res = sum ^ x2;
    cout << res << endl;

    return 0;
}