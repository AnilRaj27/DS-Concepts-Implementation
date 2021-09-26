#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> col(3);
    vector<vector<int>> array(2, col);

    for (int i = 0; i < array.size(); i++)
        for (int j = 0; j < array[i].size(); j++)
            array[i][j] = 8 + j;

    for (int i = 0; i < array.size(); i++)
    {
        for (int j = 0; j < array[i].size(); j++)
            cout << array[i][j] << " ";
        cout << endl;
    }

    vector<int> col(2);
    vector<vector<int>> array2(3, col);

    for (int i = 0; i < array.size(); i++)
    {
        vector<int> temp;
        for (int j = 0; j < array[i].size(); j++)
        {
        }
    }

    cout << array.size() << " " << array[0].size() << endl;

    return 0;
}