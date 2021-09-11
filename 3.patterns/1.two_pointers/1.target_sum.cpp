#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {1, 2, 3, 4, 6};

    //1. two pointer solution
    int i = 0, j = v.size() - 1, target = 6;
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
        {
            ans = {i, m[diff]};
        }
        else
        {
            m[v[i]] = i;
        }
    }

    cout << "Locations: " << ans[0] << " " << ans[1] << endl;

    return 0;
}