#include <iostream>
#include <cmath>

int main()
{
	int a, b, c, max, min, med;
	std::cin >> a >> b >> c;
	if (a < b) {
		max = b;
	} else {
		max = a;
	}
	if (c > max) {
		max = c;
	}
	if (a < b) {
		min = a;
	}
	if (min > c) {
		min = c;
	}
	if (a != min, a != max) { med = a; }
	if (b != min, b != max) { med = b; }
	if (c != min, c != max) { med = c; }
	std::cout << max << " " << min << " " << med;
}
