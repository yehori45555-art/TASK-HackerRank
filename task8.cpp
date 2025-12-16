#include <iostream>
	int main()
{
        // 8. Convert Celsius to Fahrenheit.
        double C;
        double F;
        std::cout << "Instert Celsium:" << std::endl;
        std::cin >> C;
                F = (C * 1.8) + 32;

        std::cout << "Result Fahrenheit:" << F << std::endl;
}
