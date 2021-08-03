#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s = "{[]}";
    stack<char> s1;

    for (int i = 0; i < s.size(); i++)
    {
        if (!s1.empty())
        {
            if (s1.top() == '[' && s[i] == ']' || s1.top() == '{' && s[i] == '}' || s1.top() == '(' && s[i] == ')')
                s1.pop();
            else
                s1.push(s[i]);
        }
        else
            s1.push(s[i]);
    }

    cout << endl;

    while (!s1.empty())
    {
        cout << s1.top() << endl;
        s1.pop();
    }

    return 0;
}