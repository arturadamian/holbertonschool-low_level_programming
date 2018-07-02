#include "binary_trees.h"


/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: a pointer to the created node, or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = NULL;

	if (parent == NULL)
		return (NULL);
	if (parent->right == NULL)
	{
		parent->right = binary_tree_node(parent, value);
	}
	else
	{
		temp = binary_tree_node(parent, value);
		temp->right = parent->right;
		parent->right->parent = temp;
		parent->right = temp;
	}
	return (parent->right);
}
