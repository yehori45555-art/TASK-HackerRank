#include <iostream>
	int main(){
        // 6. Swap two variables.
        int a, b, c;
        std::cout << "Instert a:" << std::endl;
        std::cin >> a;
        std::cout << "Instert b:" << std::endl;
        std::cin >> b;
                c = a;
                a = b;
                b = c;

        std::cout << "Result A:" << a << std::endl;
        std::cout << "Result B:" << b << std::endl;
}
