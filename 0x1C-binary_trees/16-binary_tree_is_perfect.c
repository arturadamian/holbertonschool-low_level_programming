#include "binary_trees.h"


/**
 * branch_height -  function that measures the height of a binary tree
 * @tree: pointer to the root node
 * Return: height or 0
 */
int branch_height(const binary_tree_t *tree)
{
	int x = 0, y = 0;

	if (!tree)
		return (0);
	x = branch_height(tree->left);
	y = branch_height(tree->right);
	if (x > y)
		return (x + 1);
	return (y + 1);
}
/**
 * binary_size - function that measures the size of a binary tree
 * @tree: pointer to the root node
 * Return: height or 0
 */
size_t binary_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_size(tree->left) + 1 +
		binary_size(tree->right));
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to a root node
 *
 * Return: 1 if perfect or 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree && (tree->right && tree->left))
		if (branch_height(tree->right) == branch_height(tree->left) &&
			(binary_size(tree->left) == binary_size(tree->right)))
			return (1);
	return (0);
}
