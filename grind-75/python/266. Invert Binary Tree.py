# Definition for a binary tree node.
from typing import Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        def invertBranches(node: TreeNode):
            if not node: return node
            tmp = node.right
            node.right = node.left
            node.left = tmp

            invertBranches(node.right)
            invertBranches(node.left)

            return node

        return invertBranches(root)