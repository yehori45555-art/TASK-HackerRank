#include <iostream>
	int main()
{
        // 7. Find the arithmetic mean of three numbers
        int a,b,c;
        std::cout << "Instert a:" << std::endl;
        std::cin >> a;
        std::cout << "Instert b:" << std::endl;
        std::cin >> b;
        std::cout << "Instert c:" << std::endl;
        std::cin >> c;

        std::cout << "Arithmetic mean of three numbers:" << (a + b + c) / 3 << std::endl;
}
