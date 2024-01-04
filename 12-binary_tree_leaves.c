#include "binary_trees.h"

/**
 * binary_tree_leaves - func
 * @tree: arg
 * 
 * Return: sizet
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    size_t leaves = 0;
    
    if(tree)
    {
        if(tree->left != NULL)
            leaves++;
        if(tree->right != NULL)
            leaves++;
    }
    
    return leaves;
}