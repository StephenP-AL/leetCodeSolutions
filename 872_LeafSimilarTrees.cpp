/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        
        // Set up a vector to store leaf values in order for both trees.
        vector<int> leaf;
        
        //Set an array of trees so we can itterate through them
        TreeNode* sets[2] = {root1,root2};
        for(int i = 0; i < 2; i++){
            addLeaf(sets[i],leaf);
        }

        int n = leaf.size();

        // If an odd number of leaves, no need to compare
        if(n % 2 == 1){
            return false;
        }

        // Eliminate division in the next for loop
        n = n/2; 
        int j = n;
        // Compare each element 
        for(int i = 0; i < n; i++){
            if (leaf[i] != leaf[j++]){
                return false;
            }
        }
        // No discrepencies, return true
        return true;
    }
private:

    //Recursively traverses the tree, and pushes leaf node values onto the vector
    void addLeaf(TreeNode* root, vector<int>& leaf){
        // Null Node handling
        if (root == NULL){
            return;
        }
        // Leaf node handling
        else if(root->left == NULL && root->right == NULL){
            leaf.push_back(root->val);
            return;
        }
        // Recursion
        addLeaf(root->left, leaf);
        addLeaf(root->right, leaf);
        return;
    }

};
