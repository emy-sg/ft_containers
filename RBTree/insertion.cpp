/*
  Resources:
				- https://algorithmtutor.com/Data-Structures/Tree/Red-Black-Trees/ -

   struct node {
   		std::string value;
		std::string color;
		std::string direction; // is he left or right
   	
   		node parent;
		node left_child;
		node right_child;
   };

   ==> X = inserted node using the BST method, colored to Red.

	if (Tree == empty)  // Case 1:
		Tree.x.color = black;
	else
	{
		if (Tree.x.parent == black) // Case 2:
			// we do not need to do anything, cuz it can not violate any of the properties.
		else //  (Tree.x.parent == red) // Case 3:
		{
			// the parent of x i red, and x is red, this violate the Red property.
			
			if (Tree.x.parent.color == red && Tree.x.parent.sibling == red) // Case 3.1:
			{
				Tree.x.parent.color = black;
				Tree.x.parent.sibling.color = black;
				Tree.x.parent.grand_parent.color = red;
				if (Tree.root.color == red) // check if the grand_parent is the Root
					Tree.root.color = black;
			}
			else // (Tree.x.parent.color == red && Tree.x.parent.sibling == black) // Case 3.2:
			{
				// single or double rotations depending upon whether X is a left or right child of P:

				if (Tree.x.parent == Tree.x.grand_parent.right) // x.parent is right chid of Grandparent of x // Casee 3.2.1
				{
					// Tree.x.parent == Tree.x.parent.parent.right_child 

					if (Tree.x == Tree.x.parent.left_child) // Case 3.2.1.1
					{
						// We first do Right-Rotation at the Parent of X.
						right_rotation(Tree, Tree.x.parent);
					}
					// if(Tree.x == Tree.x.parent.right_child) // Case 3.2.1.1

					left_rotation(Tree, Tree.x.parent.parent); // Perform left-Rotation at Grandparent
					// ==> That makes Grandparent of X a new sibling to X.
					
					// Then, change the color of Siblings to Red and Parent to Black.
					Tree.x = find_in_Tree(Tree, x);
					Tree.x.parent.color = black;
					Tree.x.parent.left_child.color = red;
					Tree.x.parent.right_child.color = red;
				}
				else // x.parent is left child of Grandparent of x // Case 3.2.2
				{
					// Tree.x.parent == Tree.x.parent.parent.right_child 
				
					// Perform right-Rotation at Grandparent
					// Then, change the color of Seblingss to Red and Parent to Black
				}
			}

		}
	}
*/
