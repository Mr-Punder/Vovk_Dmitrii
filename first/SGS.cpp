#include <iostream>
#include <iomanip>


int main()
{
	const double energy = 10e7;
	const double charge = 3 * 10e3;
	const double resistance = 1.0 / 9.0 * 10e-11;

	std::string quantity;
	double value;


	std::cout << "Enter quantity:";
	std::cin >> quantity;
	std::cout << "Enter value:";
	std::cin >> value;


	if (quantity == "energy")
		std::cout << value << " Dj = " << value * energy << " erg\n";
	else if (quantity == "charge")
		std::cout << value << " F = " << value * charge << " sm^-1\n";
	else if (quantity == "resistance")
		std::cout << value << " Om = " << value * resistance << " s*sm^-1\n";

	return 0;
}