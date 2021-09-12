#include <iostream>
#include <vector>

void insert_sort(std::vector<int>& vec);

void print_vector_int(std::vector <int>& vec);

int main2()
{

	int lenght;

	std::cout << "Enter lenght of array\n";
	std::cin >> lenght;

	std::vector <int> vec(lenght,0);

	for (int i = 0; i < vec.size(); ++i)
		std::cin >> vec[i];
	insert_sort(vec);
	print_vector_int(vec);

	return 0;
}


void insert_sort(std::vector<int> & vec)
{
	int i = 1;
	int j = 0;
	while (i < vec.size())
	{
		j = i;
		while (j > 0 && vec[j - 1] > vec[j])
		{
			std::swap(vec[j], vec[j - 1]);
			j--;
		}
		i--;
	}
}

void print_vector_int(std::vector<int>& vec)
{
	for (int i = 0; i < vec.size(); ++i)
		std::cout << vec[i] << " ";
}


