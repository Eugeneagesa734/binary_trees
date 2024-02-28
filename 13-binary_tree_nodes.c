#include "binary_trees.h"

/**
 * binary_tree_nodes - Nodes with atleast one child in the binary tree are counted.
 * @tree: A pointer to the root node of the tree which the nodes are to be counted.
 *
 * Return: The function must return 0 if the tree is NULL, and return node count otherwise.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
