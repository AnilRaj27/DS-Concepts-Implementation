#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    // 1.won't work, when directly string & character are added.
    // cout << "" + 'x' << endl;
    // 2.won't work, when directly character is appended using string.append() method.
    // string temp = "abc";
    // temp.append('y');
    // cout << temp;
    // 3.will work, when string is stored & character is added.
    // string temp1 = "";
    // temp1 = temp1 + 'x';
    // cout << temp1 << endl;

    //convert an integer to string
    // cout << to_string(1) + "x" << endl;

    //usage of pow in cpp
    // cout << pow(2, 3) << endl;

    // cout << 2 * (-1) << endl;

    //addition of 2 chars will be sum of their ascii nums
    // cout << 'a' + 'b' << endl;

    //vector with strings
    // vector<string> str;
    // str.push_back("abc");
    // cout << str[0] << endl;

    // map<int, int> m1;
    // m1[2] = 1;
    // if (m1.count(3))
    //     cout << "hi" << endl;

    // cout << m1[8] << endl;

    //pointer to pointer ? (Learn it)
    // https://www.youtube.com/watch?v=d3kd5KbGB48

    //Read about fmod ?
    // cout << fmod(log10(343) / log10(3), 1) << endl;
    // cout << (log10(45) / log10(3)) / 1 << endl;
    // if (ceil(log(243) / log(3)) == log(243) / log(3) && 243 != 0)
    // cout << true;

    //we can directly compare the characters rather than converting them to integers
    // char c = 'a';
    // char c1 = 'z';
    // if (c1 > c)
    //     cout << "true" << endl;

    //declaration of arr dynamic size
    // int *arr = new int[5];

    //isdigit function tells whether it is a digit or not
    // cout << isdigit('a') << endl;

    //initialize a boolean vector with true values.
    // vector<bool> v(5, true);

    // find a key in map
    // map<int, int> m;
    // m[1] = 2;
    // if (m.find(2) != m.end())
    //     cout << "found" << endl;

    // insertion
    // inserts 7 at i-th index
    // vec.insert(vec.begin() + i, 7);

    // vector insert multiple elements at a time
    // vector<int> temp;
    // temp.insert(temp.end(), {0, 1, 2});

    // find min element & location in a vector
    // int min_num = *min_element(matrix[i].begin(), matrix[i].end());
    // int loc = min_element(matrix[i].begin(), matrix[i].end()) - matrix[i].begin();

    // how-to-find-a-vector-in-a-2d-vectors-in-cpp
    // https: //stackoverflow.com/questions/25691398/how-to-find-a-vector-in-a-2d-vectors-in-c

    // erase an element in a vector
    // v.erase(v.begin() + 0);
    // v.erase(v.begin() + 0, v.begin() + 2);
    // erase with iterator
    // vector<int>::iterator it;
    // it = myvector.begin();
    // myvector.erase(it);

    // vector becomes empty
    // myvector.clear();

    // Declare a 2D vector
    // vector<int> col(3);
    // vector<vector<int>> array(2, col);

    // find an elemet in vector
    //  vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // bool x = find(matrix[1].begin(), matrix[1].end(), 0) != matrix[1].end();

    return 0;
}