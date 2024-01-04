#include "binary_trees.h"

/**
 * binary_tree_sibling - func
 * @node: arg
 * 
 * Return: binary_tree_t
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    binary_tree_t *sibling = NULL, *parent = NULL;
    
    if(node)
    {
        if(node->parent)
        {
            parent = node->parent;
            if(parent->left)
            {
                if(parent->left != node)
                    sibling = parent->left;
            }
            if(parent->right)
            {
                if(parent->right != node)
                    sibling = parent->right;
            }
        }
    }
    
    return sibling;
}