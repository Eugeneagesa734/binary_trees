#include "binary_trees.h"

/**
 * binary_tree_postorder - Binary tree is traversed using the post-order traversal.
 * @tree: Pointer of the node of the root to traverse.
 * @func: function pointer to call each node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
