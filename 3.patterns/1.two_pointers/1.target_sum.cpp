#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {2, 7, 11, 15};

    //1. two pointer solution
    int i = 0, j = v.size() - 1, target = 9;
    vector<int> ans = {-1, -1};
    while (i < j)
    {
        if (v[i] + v[j] == target)
        {
            ans = {i, j};
            break;
        }
        else if (v[i] + v[j] > target)
            j--;
        else if (v[i] + v[j] < target)
            i++;
    }

    cout << "Locations: " << ans[0] << " " << ans[1] << endl;

    //2. hash map solution
    map<int, int> m;
    for (int i = 0; i < v.size(); i++)
    {
        int diff = target - v[i];
        if (m.find(diff) != m.end())
            ans = {v[i], diff};
        else
            m[v[i]] = diff;
    }

    vector<int> res;
    for (int i = 0; i < v.size(); i++)
    {
        if (ans[0] == v[i])
            res.push_back(i);
        else if (ans[1] == v[i])
            res.push_back(i);
    }

    cout << "Locations: " << res[0] << " " << res[1] << endl;

    return 0;
}