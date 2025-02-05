#include "binary_trees.h"

/**
 * binary_tree_is_root: A node is checked wether it is a root or a binary tree
 * @node: Pointer to the node to be checked.
 *
 * Return: When node is root - 1.
 * 	   Otherwise - 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
