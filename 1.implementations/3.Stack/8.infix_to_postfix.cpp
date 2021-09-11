#include <bits/stdc++.h>
using namespace std;

int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

int main()
{
    string exp = "a+b*(c^d-e)^(f+g*h)-i";

    string postfix_result = "";
    stack<char> s;

    for (int i = 0; i < exp.size(); i++)
    {
        if ((exp[i] >= 'a' && exp[i] <= 'z') || (exp[i] >= 'A' && exp[i] <= 'Z') || (exp[i] >= '0' && exp[i] <= '9'))
            postfix_result += exp[i];
        else if (exp[i] == '(')
            s.push('(');
        else if (exp[i] == ')')
        {
            while (s.top() != '(')
            {
                postfix_result += s.top();
                s.pop();
            }
            s.pop();
        }
        else
        {
            while (!s.empty() && prec(exp[i]) <= prec(s.top()))
            {
                postfix_result += s.top();
                s.pop();
            }
            s.push(exp[i]);
        }
    }

    while (!s.empty())
    {
        postfix_result += s.top();
        s.pop();
    }

    cout << postfix_result << endl;
    cout << "abcd^e-fgh*+^*+i-" << endl;

    return 0;
}