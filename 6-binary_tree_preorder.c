#include "binary_trees.h"

/**
 * binary_tree_preorder - Uses the preordrt traversal to go through the binary tree.
 * @tree: Root node of the tree to traverse pointer.
 * @func: Function pointer to call each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
