#include "binary_trees.h"

/**
 * binary_tree_is_leaf - init
 * @node: arg
 * 
 * Return: int
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
    if(node)
    {
        if( !node->left && !node->right)
            return 1;    
    }
    
    return 0;
}