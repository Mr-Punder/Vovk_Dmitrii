#include <iostream>
#include <iomanip>

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

    
    std::cout << name << '\n';
    std::cout << "Price:" << std::setw(10) <<  std::setfill('.') << '.' << std::setw(8) << std::setfill('0') << output << "\n";
    std::cout << "Has cash-back:" <<  std::setfill('0') << std::boolalpha << std::setw(11) << hasCashback << "\n";
    std::cout << "Max temperature:" << std::showpos << std::dec << std::setw(9) << temperature << "\n";



    return 0;
}

