#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node into a binary tree as its right-child.
 * @parent: Pointer to the node which the left node is to be inserted.
 * @value: New node to store the value.
 *
 * Return: If an error occurs or the parent is NULL - NULL
 * 	   Otherwise - new node pointer.
 *
 * Description: The new node replaces the old one and the old left-child becomes the
 * 		new node's right-child if the parent already has a left-child.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}

	parent->right = new;

	return (new);
}


