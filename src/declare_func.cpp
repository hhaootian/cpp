#include <iostream>

int max(int num1, int num2);

int main() {
	std::cout << max(12, 10) << std::endl;
}

int max(int num1, int num2) {
	return num1 > num2 ? num1 : num2;
}
