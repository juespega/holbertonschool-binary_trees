#include "binary_trees.h"

/**
 * binary_tree_print - Prints a binary tree
 *
 * @tree: Pointer to the root node of the tree to print
 *
 * Description: This function prints the binary tree using
 *              in-order traversal.
 */
void binary_tree_print(const binary_tree_t *tree)
{
	if (tree == NULL)
	return;

	binary_tree_print(tree->left);
	printf("%d\n", tree->n);
	binary_tree_print(tree->right);
}
