/* This program creates a linked list of tree names.
Each node contains the name of the tree and a pointer to the next tree. 
Nodes are dynamically allocated and are displayed in reverse order. */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define NL 20

typedef struct tree 
{
    char tree_name [NL];
    struct tree* next;
}tree;


int
main (void)
{
	/* temporary hold for tree name */
	char name[NL];
	
	/* declaring the starting and traveling pointers */
	tree *p, *start;
	
	/* list is empty at the beginning */
	start = NULL;

	/* enter first tree name (or END) */
	printf ("Enter a tree name (END to finish): ");
	fgets (name,sizeof(name),stdin);
        treename[strlen(treename)-1] = '\0';
	
	/* add tree name to the list and keep asking for more until END */
	while (strcmp (name, "END") != 0)
	{
		
		/* allocate new node to hold new tree */
		p = (tree *) calloc (1, sizeof(tree));
		/* put tree name into new node */
		strcpy (p -> tree_name, name);
		/* puts pointer to previous tree into pointer element */
		p -> next = start;
		/* updates start pointer with new tree */
		start = p;
		printf ("Enter a tree name (enter end to finish): ");
		fgets (name,sizeof(name),stdin);
                treename[strlen(treename)-1] = '\0';
	}
		
		
        /* displays list of tree in reverse order */
	p = start;
	while (p != NULL)
	{
   		printf ("%s\n", p -> tree_name);
   		p = p -> next;
	}
	return (0);
}

