#include <string>
#include <algorithm>

#include "/tmp_amd/cage/export/cage/3/z5338676/comp6771/tut01/test/catch2/catch.hpp"

void sort3(int& a, int& b, int& c) {
	if (a > c) {
		std::swap(a, c);
	}

	if (b > c) {
		std::swap(b, c);
	}

	if (a > b) {
		std::swap(a, b);
	}
}

void sort3(std::string& a, std::string& b, std::string& c) {
	if (a > c) {
		std::swap(a, c);
	}

	if (b > c) {
		std::swap(b, c);
	}

	if (a > b) {
		std::swap(a, b);
	}
}
