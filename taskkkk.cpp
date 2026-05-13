#include <iostream>
#include <string>

 
bool isValid(const std::string& s) {
    for (char c : s) {
        if (!((c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))) {
            return false;
        }
    }
    return true;
}


std::string encode(const std::string& input) {
    std::string result;
    int sum = 0;

    for (char c : input) {
        if (c >= 'A' && c <= 'Z') {
            sum += (c - 'A' + 1);
        } else { 
            if (sum > 0) {
                result += std::to_string(sum);
                sum = 0;
            }
            result += c;
        }
    }

    if (sum > 0) {
        result += std::to_string(sum);
    }

    return result;
}

int main() {
    std::string input;

    while (true) {
        std::cout << "Введіть рядок (A-Z та цифри): ";
        std::cin >> input;

        if (isValid(input)) {
            break;
        } else {
            std::cout << "Помилка! Тільки великі латинські літери і цифри.\n";
        }
    }

    std::cout << "Результат: " << encode(input) << std::endl;

    return 0;
}
