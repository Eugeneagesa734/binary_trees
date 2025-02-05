#include "binary_trees.h"

/**
 * binary_tree_size - Binary tree size Measures.
 * @tree: Pointer to the root node of the tree which its size is to be measured.
 *
 * Return: The tree size.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}
	return (size);
}
