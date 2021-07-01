#pragma once
#include "BalancedBT.hpp"
#include "BinarySearchTree.hpp"
#include "AVLTree.hpp"

namespace DS {
	template<typename T>
	using BalancedBST = AVLTree<T>;
}