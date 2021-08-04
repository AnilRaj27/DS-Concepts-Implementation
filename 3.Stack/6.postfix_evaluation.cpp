#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "23*54*+9-";

    cout << int(str[0]) << endl;
    cout << str[0] - '0' << endl;

    stack<int> s;

    for (int i = 0; i < str.size(); i++)
    {
        if (int(str[i]) >= 48 && int(str[i]) <= 57)
            s.push(str[i] - '0');
        else
        {
            int val2 = s.top();
            s.pop();
            int val1 = s.top();
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
