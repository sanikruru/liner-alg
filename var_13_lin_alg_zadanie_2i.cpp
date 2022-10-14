// zadanie 2i
#include <iostream>

int main()
{
    float a = 0;
    float S = 0;
    float P = 0;
    std::cin >> a;
    S = 2 * pow(a, 2) * (sqrt(2) + 1);
    P = a * 8;
    std::cout << S << " " << P;
}
