#include "binary_trees.h"

/**
 * binary_tree_insert_left - init
 * @parent: arg
 * @value: int
 * 
 * Return: pointer
 * 
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *newNode = NULL;
    
    if( parent )
    {
        newNode = malloc(sizeof(binary_tree_t));
        if(newNode)
        {
            newNode->n = value;
            newNode->parent = parent;
            
            if(parent->left)
            { 
                newNode->left = parent->left;
            }
            parent->left = newNode;
        }
    }
    
    return newNode;
}