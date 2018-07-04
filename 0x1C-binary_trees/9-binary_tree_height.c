#include "binary_trees.h"


/**
 * binary_tree_height -  function that measures the height of a binary tree
 * @tree: pointer to the root node
 * Return: height or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t x = 0;
	size_t y = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	x = binary_tree_height(tree->left);
	y = binary_tree_height(tree->right);
	if (x > y)
		return (x + 1);
	return (y + 1);
}
