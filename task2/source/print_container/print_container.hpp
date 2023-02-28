#pragma once
#include <iostream>
#include <algorithm>

template <typename container>
void print_container(const container& c) {
	for (auto i = std::begin(c); i != std::end(c); i = std::next(i)) {
		std::cout << *i << " ";
	}

	std::cout << std::endl;
}