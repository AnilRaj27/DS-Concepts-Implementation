#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;

bool comp(int x, int y)
{
    return y > x;
}

void vectorDemo()
{
    // int i;
    // //int n;cin>>n;

    // vector<pair<int, int> > v;
    // v.push_back({1, 2});

    // /*vector<int> v(n);
    // for(i=0;i<v.size();i++){
    // 	cin>>v[i];
    // }
    // */
    // //sort(v.begin(),v.end());
    // for (i = 0; i < v.size(); i++)s
    // {
    // 	cout << v[i].first << "\n";
    // }

    // --------------- Vectors Practice ---------------
    vector<int> arr = {3, 1, 2};
    cout << arr[1] << endl;

    int len = arr.capacity() - 1;
    sort(arr.begin(), arr.end());

    bool bs_present = binary_search(arr.begin(), arr.end(), 4);
    cout << bs_present << endl;

    std::cout << std::boolalpha;
    cout << "here it is " << true << endl;

    arr.push_back(100);
    arr.push_back(100);
    arr.push_back(100);
    arr.push_back(100);
    arr.push_back(100);
    arr.push_back(123);

    auto it1 = lower_bound(arr.begin(), arr.end(), 100); // >=
    auto it2 = upper_bound(arr.begin(), arr.end(), 100); // >

    cout << *it1 << *it2 << endl;
    cout << it2 - it1 << endl;

    sort(arr.begin(), arr.end(), comp);

    // for loop using iterator
    // vector<int>::iterator it3;
    // for (it3 = arr.begin(); it3 != arr.end(); it3++)
    // {
    // 	cout << *it3 << endl;
    // }

    for (int &i : arr) // reference to update the value
    {
        i++;
        cout << i << " ";
    }
    cout << endl;
    for (int i : arr)
    {
        cout << i << " ";
    }
}

void setDemo()
{

    // set autmoatically sorts the values while adding.

    set<int> s;

    s.insert(1);
    s.insert(-1);
    s.insert(-10);
    s.insert(2);

    auto it = s.find(-1);

    if (it == s.end())
    {
        cout << "not present" << endl;
    }
    else
    {
        cout << "present " << *it << endl;
    }

    auto it2 = s.upper_bound(-1);
    auto it3 = s.upper_bound(0);

    cout << *it2 << " " << *it2 << endl;

    auto it4 = s.upper_bound(2);
    if (it4 == s.end())
    {
        cout << "not present" << endl;
    }

    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    s.erase(1);

    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;
}

void mapDemo()
{
    map<int, int> m;
    m[0] = 1;
    m[1] = 10;
    m[2] = 3;

    map<char, int> cnt;
    string x = "anil raj";

    for (char c : x)
    {
        cnt[c] = cnt[c] + 1;
    }

    cout << cnt['a'] << " " << cnt['j'] << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    // --------------- C++ STL ---------------
    // vectorDemo();
    // setDemo();
    // mapDemo();

    return 0;
}
