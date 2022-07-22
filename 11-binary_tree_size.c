#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree:  pointer to the root node of the tree to traverse
 * Return: number of nodes of a binary tree
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	int size = 1; /* Count root*/

	if (!tree)
		return (0);

	size = size + binary_tree_size(tree->left);	/* true == 1 */
	size = size + binary_tree_size(tree->right);
	return (size);
}
