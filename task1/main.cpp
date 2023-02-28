#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
void print(std::vector<T>& v) {
	for (const auto& el : v) { std::cout << el << " "; }
	std::cout << "\n";
}

int main(int argc, char** argv) {

	std::vector<int> v{ 1, 1, 2, 5, 6, 1, 2, 4 };

	std::cout << "[IN]: ";
	print(v);

	std::sort(v.begin(), v.end());
	auto result_unique = std::unique(v.begin(), v.end());
	v.erase(result_unique, v.end());

	std::cout << "[OUT]: ";
	print(v);

	return 0;
}