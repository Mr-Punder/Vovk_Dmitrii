#include <iostream>
#include <vector>
#include <cmath>


void binar_search(std::vector <int>& vec);


int main3()
{
	std::vector <int> vec(10,5);
	for (auto i = 0; i < vec.size(); ++i)
		vec[i] = i;

	binar_search(vec);


	return 0;
}


void binar_search(std::vector <int>& vec)
{
	int n,r,m,l = 0;
	
	std::cout << "Enter element:\n";
	std::cin >> n;
	
	r = vec.size() - 1;
	while (l != r)
	{
		m = std::ceil((l + r) / 2.0);
		if (vec[m] > n)
			r = m - 1;
		else
			l = m;
	}
	if (vec[l] == n)
	{
		std::cout << l << std::endl;
		binar_search(vec);
	}
	else
	{
		std::cout << "don't exist\n";
		binar_search(vec);
	}
}

