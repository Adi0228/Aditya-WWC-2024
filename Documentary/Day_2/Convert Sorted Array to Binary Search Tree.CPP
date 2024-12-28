#include <iostream>
#include <vector>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* sortedArrayToBST(std::vector<int>& nums, int left, int right) {
    if (left > right) return NULL;

    int mid = left + (right - left) / 2; // To avoid overflow
    TreeNode* root = new TreeNode(nums[mid]);
    root->left = sortedArrayToBST(nums, left, mid - 1);
    root->right = sortedArrayToBST(nums, mid + 1, right);
    
    return root;
}

TreeNode* sortedArrayToBST(std::vector<int>& nums) {
    return sortedArrayToBST(nums, 0, nums.size() - 1);
}

// Example usage
int main() {
    std::vector<int> nums = {-10, -3, 0, 5, 9};
    TreeNode* root = sortedArrayToBST(nums);
    // You can add a function to print the tree if needed
    return 0;
}