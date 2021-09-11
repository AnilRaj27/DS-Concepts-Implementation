#include <bits/stdc++.h>
#include <iostream>
using namespace std;

struct TreeNode
{
    int data;
    TreeNode *left, *right;
};

TreeNode *root = NULL;

TreeNode *createNode(int val)
{
    TreeNode *node = new TreeNode;
    node->data = val;
    node->left = NULL;
    node->right = NULL;

    return node;
}

void insert(int num)
{
    if (root == NULL)
        root = createNode(num);
    else
    {
        TreeNode *temp = root;
        TreeNode *node = createNode(num);

        while (temp)
        {
            if (node->data < temp->data && temp->left)
                temp = temp->left;
            else if (node->data > temp->data && temp->right)
                temp = temp->right;
            else
                break;
        }

        if (node->data < temp->data)
            temp->left = node;
        else
            temp->right = node;
    }
}

void inorder(TreeNode *root)
{
    if (!root)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void height(TreeNode *root)
{
    TreeNode *temp = root;
    vector<vector<TreeNode *>> v = {{temp}};

    for (int i = 0; i < v.size(); i++)
    {
        vector<TreeNode *> items;
        for (int j = 0; j < v[i].size(); j++)
        {
            if (v[i][j]->left)
                items.push_back(v[i][j]->left);

            if (v[i][j]->right)
                items.push_back(v[i][j]->right);
        }
        if (items.size())
            v.push_back(items);
    }

    printf("\n");
    cout << "Level Order Elements" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j]->data << " ";
        }
        cout << endl;
    }
}

int main()
{

    cout << "Perform Operations in the Tree: " << endl;
    cout << "1.Insert\n2.Print BST\n3.Height"
         << endl;

    while (true)
    {
        cout << "Enter your choice: " << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the number to Insert: "
                 << endl;
            int num;
            cin >> num;
            insert(num);
            break;
        case 2:
            printf("\n");
            cout << "Your Tree is: " << endl;
            inorder(root);
            printf("\n\n");
            break;
        case 3:
            height(root);
        default:
            printf("\n");
            cout << "Your Tree is: " << endl;
            inorder(root);
            printf("\n\n");
            exit(1);
        }
    }

    return 0;
}