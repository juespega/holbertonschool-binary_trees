#include "binary_trees.h"
/**
 * binary_tree_size - size of the tree structure in bytes
 *
 * @tree: the tree structure to be allocated
 *
 * Return: the size of the tree structure
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}
	return (size);
}
