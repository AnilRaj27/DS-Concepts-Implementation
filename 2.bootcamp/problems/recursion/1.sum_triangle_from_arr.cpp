#include <bits/stdc++.h>
using namespace std;

vector<int> calculate_sum(vector<int> &arr, vector<int> &temp, int i)
{
    if (i == arr.size() - 1)
        return temp;

    temp.push_back(arr[i] + arr[i + 1]);
    i++;

    return calculate_sum(arr, temp, i);
}

vector<vector<int>> final_ans(vector<vector<int>> &ans, vector<int> &arr)
{
    int i = 0;
    vector<int> temp = {};

    vector<int> result = calculate_sum(arr, temp, i);
    ans.push_back(result);

    if (temp.size() == 1)
        return ans;

    return final_ans(ans, result);
}

int main()
{
    vector<vector<int>> ans;
    vector<int> arr = {1, 2, 3, 4, 5};

    ans = final_ans(ans, arr);

    for (auto i : ans)
    {
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }

    return 0;
}