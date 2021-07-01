#pragma once
#include "CircularlyLinkedList.hpp"
#include "SinglyLinkedList.hpp"
#include "DoublyLinkedList.hpp"

namespace DS {
	template<typename T>
	using LinkedList = DoublyLinkedList<T>;
}