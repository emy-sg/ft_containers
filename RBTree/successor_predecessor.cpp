==> The successor of a node in a BST is a node, whose key is next key in the sorted order determined by an in-order walk.
 ( That means, if we sort the nodes based on the ky in increasing order, each node is the successor of the preceding node.)

==> Similarly, each node is the predecessor of the following node.

==> Due to the stucture of the BST, we can find the "successor" and "predecessor" of a node without comparing the keys.

	// ------------------------------------
To find the "successor" of a node "x" with key "x.key", we do the following:
	1- If the "Right subtree" of a node "x" is non-empty,
		==> then the "successor" of "x" is just the leftmost node in "x"'s "Right subtree".

	2- If the "Right subtree" of a node "x" is empty,
		==> then "y" is the "lowest ancestor" of "x" whose left child is also an "ancestor of x".

In a similar way, to find the predecessor of a node "x" with key "x.key", we do the following:
	1- If the "Left subtree" of node "x" is non-empty,
   		==> then the "successor" of "x" is just the "rightmost" node in "x"s "Left subtree".

	2- If the "Left subtree" of node "x" is empty, and "x" has a "successor y",
		==> then "y" is the	"lowest ancestor" of "x" whose "right child" is also an "ancestor" of "x".

	//	----------------------------------------


