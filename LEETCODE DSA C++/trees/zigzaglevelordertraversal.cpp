//https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/
vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans; 
        if(root==NULL) return ans ;
        queue<TreeNode * > q ;
        q.push(root);
        bool lefttoright = true;
        while(!q.empty()) {
            int size = q.size() ;
            vector<int>level (size);
            
            for(int i=0 ;i<size ;i++)
           { TreeNode * node = q.front() ;
            q.pop() ;
            int index = (lefttoright )? i : (size- i -1) ;
            level[index] = node->val; 
            if(node->left !=NULL) q.push(node->left) ; 
            if(node->right) q.push(node->right)  ; 

           }
             lefttoright=!lefttoright ;
            ans.push_back(level) ;
            
        }
        return ans ;
    }