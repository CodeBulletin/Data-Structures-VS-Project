#pragma once
#include "HashMap.hpp"
#include "HashSet.hpp"
#include "DisjointSet.hpp"

namespace DS {
	template<typename T>
	using UnorderedSet = HashSet<T, std::hash, 1, LinkedList>;

	template<typename T1, typename T2>
	using UnorderedMap = HashMap<T1, T2, std::hash, 1, LinkedList>;
}