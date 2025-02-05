#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * 			in a binary tree.
 * @node: Pointer of the node to find uncle of.
 *
 * Return: NULL if the node has no uncle
 * 	  otherwise pointer to the uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL ||
		node->parent == NULL ||
		node->parent->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->parent->left == node->parent)
	{
		return (node->parent->parent->right);
	}
	else
	{
		return (node->parent->parent->left);
	}
}
