#include <iostream>

#include <vector>
#include <set>
#include <list>
#include <string>

#include "print_container/print_container.hpp"

int main() {

	std::set<std::string> test_set = { "one", "two", "three", "four" };
	print_container(test_set);

	std::list<std::string> test_list = { "one", "two", "three", "four" };
	print_container(test_list);

	std::vector<std::string> test_vector = { "one", "two", "three", "four" };
	print_container(test_vector);

	return 0;
}