#include "binary_trees.h"


/**
 * binary_tree_depth - function that measures the depth of a node
 * @tree: pointer to the node to measure the depth
 *
 * Return: depth or 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t x = 0;

	if (!tree || !tree->parent)
		return (0);
	if (tree->parent)
		x =  (binary_tree_depth(tree->parent) + 1);
	return (x);
}
