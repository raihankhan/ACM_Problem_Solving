/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
	struct Node {
		int data;
		Node* left;
		Node* right;
	}
*/

bool check(Node* root,int mini,int maxi)
    {
        if(root!=NULL)
        {
            if(root->data<=mini or root->data>=maxi ) return false;
            return check(root->left, mini , root->data ) & check(root->right, root->data , maxi);
        }
        else return true;
    }
	bool checkBST(Node* root) {
        if(root==nullptr) return true;
        return check(root,-1,100000);
	}