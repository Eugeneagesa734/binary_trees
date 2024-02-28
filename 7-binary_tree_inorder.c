#include "binary_trees.h"

/**
 * binary_tree_inorder - Uses the in order traversal to go through the binary tree.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Function pointer to be called for each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
