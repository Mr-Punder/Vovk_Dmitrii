#include <iostream>
#include <iomanip>

int main() {
    std::string name;
    int price, temperature;
    bool hasCashback;
    std::cout << "Product's name: ";
    std::cin >> name;
    std::cout << "Product's price: ";
    std::cin >> price;
    std::cout <<  "Is cash-back available for this product? (true/false) ";
    std::cin >> std::boolalpha >>  hasCashback;
    std::cout << "Maximum storing temperature: ";
    std::cin >> temperature;

    std::cout << '\n' << "*************** OUTPUT ***************" << "\n\n";

    std::cout <<  name << '\n';
    std::cout << "Price:" << std::setw(19)  << std::setfill('.') << std::hex << std::uppercase << std::setprecision(5) << std::fixed <<  price << "\n";
    std::cout << "Has cash-back:" << std::boolalpha << std::setw(11) << std::setfill('.') << hasCashback << "\n";
    std::cout << "Max temperature:" << std::showpos << std::dec << std::setw(9) << std::setfill('.') << temperature << "\n";



    // Input your code here..

    return 0;
}

