
/* This program creates a linked list of tree names.
Each node contains the name of the tree and a pointer to the next tree. */

#include <stdio.h>
#include <string.h>
#define NL 20

typedef struct tree 
{
    char tree_name [NL];
    struct tree* next;
}tree;


int
main (void)
{
	/* declaring variables to hold tree nodes */
	tree tree1, tree2, tree3, tree4;

	/* declaring the starting and traveling pointers */
	tree *p, *start;

	/* putting tree names into each node */
	strcpy (tree1.tree_name, "Maple");
	strcpy (tree2.tree_name, "Fir");
	strcpy (tree3.tree_name, "Pine");
	strcpy (tree4.tree_name, "Oak");

	/* setting the start of the list at tree1 */
	start = &tree1;

	/* linking the other trees together */
	tree1.next = &tree2;
	tree2.next = &tree3;
	tree3.next = &tree4;

	/* sets tree4 as the last node of the list  */
	tree4.next = NULL;

	/* printing out the list by traveling though it */
	p = start;
	while (p != NULL)
	{
   		printf ("%s\n", p -> tree_name);
   		p = p -> next;
	}
	return (0);
}
