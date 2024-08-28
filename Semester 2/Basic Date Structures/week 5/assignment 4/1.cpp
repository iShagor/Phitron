#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
    public:
        long long val;
        TreeNode* left;
        TreeNode* right;

        TreeNode(long long val)
        {
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};

TreeNode* input_tree()
{
    TreeNode* root;

    long long val;
    cin >> val;

    if(val == -1) root = NULL;
    else root = new TreeNode(val);

    queue<TreeNode*> q;
    if(root) q.push(root);

    while(!q.empty())
    {
        TreeNode* curr = q.front();
        q.pop();

        long long l, r;
        cin >> l >> r;

        TreeNode* left;
        TreeNode* right;

        if(l == -1) left = NULL;
        else left = new TreeNode(l);

        if(r == -1) right = NULL;
        else right = new TreeNode(r);

        if(left) curr->left = left;
        if(right) curr->right = right;

        if(curr->left) q.push(curr->left);
        if(curr->right) q.push(curr->right);
    }

    return root;
}

void sum(TreeNode* root, long long* sm)
{
    if(!root) return;

    *sm += root->val;

    sum(root->left, sm);
    sum(root->right, sm);

}

int main()
{
    TreeNode* root = input_tree();
    long long sm = 0;
    sum(root, &sm);
    cout << sm;
}