#pragma once
#include "StaticArrayQueue.hpp"
#include "LinkedListQueue.hpp"
#include "PriorityQueue.hpp"

namespace DS {
	template <typename T>
	using Queue = LinkedListQueue<T>;

	template <typename T, int max_size>
	using StaticQueue = StaticArrayQueue<T, max_size>;
}