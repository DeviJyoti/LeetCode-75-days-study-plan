//link:-https://leetcode.com/problems/n-ary-tree-preorder-traversal/description/?envType=study-plan&id=level-1
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int>ans;
        if(!root) return ans;
        rec_fun(root,ans);
        return ans;
    }
    void rec_fun(Node* root,vector<int>&ans){
        ans.push_back(root->val);
        for(int i=0;i<root->children.size();i++)
        {
           rec_fun(root->children[i],ans);
        }
        
    }
};
