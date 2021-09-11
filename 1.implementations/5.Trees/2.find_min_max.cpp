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

void find_min(TreeNode *root)
{
    if (!root)
        return;

    TreeNode *temp = root;

    while (temp->left)
    {
        temp = temp->left;
    }

    printf("\n");
    cout << "Min Element: " << temp->data << endl;
    printf("\n\n");
}

void find_max(TreeNode *root)
{
    if (!root)
        return;

    TreeNode *temp = root;

    while (temp->right)
    {
        temp = temp->right;
    }

    printf("\n");
    cout << "Max Element: " << temp->data << endl;
    printf("\n\n");
}

int main()
{

    cout << "Perform Operations in the Tree: " << endl;
    cout << "1.Insert\n2.Delete\n3.Print BST\n4.Min\n5.Max"
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
            int num1;
            cin >> num1;
            // remove(num);
            break;
        case 3:
            printf("\n");
            cout << "Your Tree is: " << endl;
            inorder(root);
            printf("\n\n");
            break;
        case 4:
            find_min(root);
            break;
        case 5:
            find_max(root);
            break;
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