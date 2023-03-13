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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> inorder;
        
        stack<TreeNode*> s;
        TreeNode* node=root;
        while(true){
            if(node!=NULL){
                s.push(node);
                node=node->left;
            }
            else{
                if(s.empty()==true){
                    break;
                }
                node=s.top();
                s.pop();
                inorder.push_back(node->val);
                node=node->right;
            }
        }
        return inorder;
        
    }
};


////RECURSIVE
// class Solution {
//   public:
//     // Function to return a list containing the inorder traversal of the tree.
//     vector<int> inOrder(Node* root) {
//         vector<int> ans;
//         stack<Node*> st;
//         Node* node=root;
//         while(true){
//             if(node!=NULL){
//                 st.push(node);
//                 node=node->left;
//             }
//             else{
//                 if(st.empty()){
//                     break;
//                 }
//                 node=st.top();
//                 st.pop();
//                 ans.push_back(node->data);
//                 node=node->right;
//             }
//         }
//         return ans;
//     }
// };