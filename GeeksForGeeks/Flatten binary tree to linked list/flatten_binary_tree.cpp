class Solution
{
    public:
    void solve(Node *root)
    {
        if(root==nullptr)
            return;
        Node* l=root->left;
        Node* r=root->right;
        solve(root->left);
        solve(root->right);
        root->left=nullptr;
        root->right=l;
        while(root->right!=nullptr)
            root=root->right;
        root->right=r;
    }
    void flatten(Node *root)
    {
        //code here
        solve(root);
    }
};
