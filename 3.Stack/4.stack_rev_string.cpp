#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<char> v = {'a', 'b', 'c'};

    stack<char> s;

    for (auto i : v)
    {
        s.push(i);
        v.pop_back();
    }

    while (!s.empty())
    {
        v.push_back(s.top());
        s.pop();
    }

    for (auto i : v)
        cout << i << endl;

    // cout << s.top() << endl;

    return 0;
}