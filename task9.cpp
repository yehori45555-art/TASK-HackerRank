#include <iostream>
	int main()
{
        // 9. Convert Fahrenheit to Celsium.
        double C;
        double F;
        std::cout << "Instert Fahrenheit:" << std::endl;
        std::cin >> F;
                C = (F - 32) / 1.8;

        std::cout << "Result Celsium:" << C << std::endl;
}
