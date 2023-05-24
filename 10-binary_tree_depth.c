#include "binary_trees.h"

/**
 * binary_tree_depth - depth of the tree structure
 *
 * @tree: the tree structure to traverse
 *
 * Return: size_t - the size of the tree structure
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
