#include "binary_trees.h"
/**
 * binary_tree_leaves - leaves of a binary tree structure
 *
 * @tree: a binary tree structure representing
 *
 * Return: a list of binary trees
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		leaves += (!tree->left && !tree->right) ? 1 : 0;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
