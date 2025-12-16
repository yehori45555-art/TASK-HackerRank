#include <iostream>
	int main()
{
        // 13. Check whether a number is positive or negative.
        int a;
        std::cout << "Instert number A:" << std::endl;
        std::cin >> a;
        if (a > 0)
        {
                std::cout << "this number is positive" << std::endl;
        } 
        else if (a < 0)
        {
                std::cout << "this number is negative" << std::endl;
        } 
        else
        {
                std::cout << "this number is 0" << std::endl;
        }
}
