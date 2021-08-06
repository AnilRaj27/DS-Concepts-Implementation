#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "-+*23*549";

    stack<int> s;

    for (int i = str.size() - 1; i >= 0; i--)
    {
        if (int(str[i]) >= 48 && int(str[i]) <= 57)
            s.push(str[i] - '0');
        else
        {
            int val1 = s.top();
            s.pop();
            int val2 = s.top();
            s.pop();

            switch (str[i])
            {
            case '*':
                s.push(val1 * val2);
                break;
            case '+':
                s.push(val1 + val2);
                break;
            case '-':
                s.push(val1 - val2);
                break;
            case '/':
                s.push(val1 / val2);
                break;
            }
        }
    }

    cout << s.top() << endl;

    return 0;
}