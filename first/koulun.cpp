#include <iostream>
#include <iomanip>
#include <sstream>

int main() {
    std::string name, output;
    int price, temperature;
    bool hasCashback;
    std::cout << "Product's name: ";
    std::cin >> name;
    std::cout << "Product's price: ";
    std::cin >> price;
    std::cout << "Is cash-back available for this product? (true/false) ";
    std::cin >> std::boolalpha >> hasCashback;
    std::cout << "Maximum storing temperature: ";
    std::cin >> temperature;

    std::cout << '\n' << "*************** OUTPUT ***************" << "\n\n";

    std::stringstream ss;
    ss << std::setw(8) << std::setfill('0') << std::hex << std::uppercase << price;
    ss >> output;
    std::cout << name << '\n';
    std::cout << "Price:" << std::setw(19) << std::setfill('.') << output << "\n";
    std::cout << "Has cash-back:" << std::boolalpha << std::setw(11) << hasCashback << "\n";
    std::cout << "Max temperature:" << std::showpos << std::dec << std::setw(9) << temperature << "\n";



    return 0;
}

