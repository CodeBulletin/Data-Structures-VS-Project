#include <iostream>
#include <string>

#include "Array.hpp"
#include "LinkedList.hpp"
#include "Queue.hpp"
#include "Stack.hpp"
#include "Trees.hpp"

int main() {
	{
		DS::AVLTree<int> BST;
		for (int i = -2000000; i <= 2000000; i++) {
			BST.Insert(i);
		}

		for (int i = -2000000; i <= 2000000; i++) {
			BST.Delete(BST.Find(i));
		}
	}

	std::cin.get();
	return 0;
}