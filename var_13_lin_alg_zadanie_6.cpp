#include <iostream>
#include <cmath>

int main() {
	float a = 0;
	float b = 0;
	float c = 0;
	float arifm = 0;
	float dif = 0;
	std::cin >> a >> b >> c;
	arifm = (a + b + c) / 3;
	dif = (2 * (a + c)) / (3 * b);
	std::cout << arifm << " " << dif;
}
