#include "binary_trees.h"

/**
 * binary_tree_balance - Balance factor of a binary tree is measured.
 * @tree: a reference to the tree's root node, which is used to calculate the balancing factor.
 *
 * Return: If the tree is NULL, return 0, else balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - Height of the binary tree is measured
 * @tree: Pointer of the root node of the tree to measure the height.
 *
 * Return: If the tree is NULL, Return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l > r) ? l : r);
	}
	return (0);
}
