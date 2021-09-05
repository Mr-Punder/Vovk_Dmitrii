#include <iostream>
#include <iomanip>
#include <cmath>


int main()
{
	double a, b, c, det;
	const double epsilon = std::numeric_limits <double> ::epsilon();
	std::cout << "Enter square equation of form: ax^2 + bx + c = 0\na:";
	std::cin >> a;
	std::cout << "b:";
	std::cin >> b;
	std::cout << "c:";
	std::cin >> c;
	std::cout << "Solution: ";

	if (abs(a) < epsilon)
		if (abs(b) < epsilon)
			if (abs(c) < epsilon)
				std::cout << "any nummber";
			else
				std::cout << "no solutions";
		else
			std::cout << (0-c) / b;
	else
	{
		det = b * b - 4 * a * c;
		if (det<-epsilon)
			std::cout << "no solutions";
		else if (abs(det)<epsilon)
			std::cout << (0-b) / (2*a);
		else
			std::cout << (-b + sqrt(det))/ (2 * a) << " ; " << (-b - sqrt(det)) / (2 * a);
	}


}