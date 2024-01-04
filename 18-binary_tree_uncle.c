#include "binary_trees.h"

/**
 * binary_tree_uncle - func
 * @node: arg
 * 
 * Return: binary_tree_t
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    binary_tree_t *uncle = NULL, *parent = NULL, *grandparent = NULL;
    
    if(node)
    {
        if(node->parent)
        {
            parent = node->parent;
            if(parent->parent)
            {
                grandparent = parent->parent;
                if(grandparent->left)
                {
                    if(grandparent->left != parent)
                        uncle = grandparent->left;
                }
                
                if(grandparent->right)
                {
                    if(grandparent->right != parent)
                        uncle = grandparent->right;
                }
            }
        }
    }
    
    return uncle;
}