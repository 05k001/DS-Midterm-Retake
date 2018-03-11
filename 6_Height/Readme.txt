The Height of a complete binary tree or Heap is [logN]. So we count the number of nodes in the tree and return logN.

So the c++ function should look something like this

int HeapHeight( ) const {

	return log2(array.size);
	}

This seems to work in my code. This method should be O(1) although Im not sure how the array.size()
function works.

