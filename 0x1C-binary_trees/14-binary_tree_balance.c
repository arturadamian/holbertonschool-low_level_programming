#include "binary_trees.h"


/**
 * branch_height -  function that measures the height of a binary tree
 * @tree: pointer to the root node
 *
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
 * binary_tree_balance -  function that measures the balance factor
 * @tree: pointer to the root node
 *
 * Return: the balance
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (branch_height(tree->left) - branch_height(tree->right));
}
