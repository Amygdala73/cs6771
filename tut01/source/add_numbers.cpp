#include <iostream>

int main() {
	auto a = 0;
	auto b = 0;
	if (not (std::cin >> a >> b)) {
  	std::cerr << "Something went wrong while reading an integer, bailing...\n";
  	return 1;
	}

	std::cout << "SUm: " << (a+b) << '\n';

	return 0;
}
