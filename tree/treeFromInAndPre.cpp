#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    int preind = 0;
    int getPos(vector<int> &inorder, int start, int end, int curr)
    {
        for (int i = start; i <= end; i++)
        {
            if (inorder[i] == curr)
            {
                return i;
            }
        }
        return -1;
    }
    TreeNode *helper(vector<int>& preorder, vector<int>& inorder,int start,int end){
        if(start>end) return NULL;
        TreeNode *root = new TreeNode(preorder[preind++]);
        if(start == end) return root;
        int inpos = getPos(inorder,start,end,root->val);
        root->left = helper(preorder,inorder,start,inpos-1);
        root->right = helper(preorder,inorder,inpos+1,end);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return helper(preorder,inorder,0,preorder.size()-1);
    }
};

