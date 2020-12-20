/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        if(pre.size()==0){
            return NULL;
        }
        
        TreeNode* head = new TreeNode(pre[0]);
        int i,j;
        for(i=0;i<pre.size();i++){
            if(vin[i]==pre[0])break;
        }
        vector<int> lp;
        vector<int> rp;
        vector<int> lv;
        vector<int> rv;
        for(j=0;j<i;j++){
            lp.push_back(pre[j+1]);
            lv.push_back(vin[j]);
        }
        for(j=i+1;j<vin.size();j++){
            rp.push_back(pre[j]);
            rv.push_back(vin[j]);
        }
        head->left=reConstructBinaryTree(lp,lv);
        head->right=reConstructBinaryTree(rp,rv);
        
        
        return head; 

    }
};