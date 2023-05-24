#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes of a tree and returns a list of nodes
 *
 * @tree: A pointer to the root node of the tree
 *
 * Return: List of nodes 0 on success and 1 on failure
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += ((tree->left || tree->right) ? 1 : 0);
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
