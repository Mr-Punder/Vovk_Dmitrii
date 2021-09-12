#include <iostream>
#include <vector>
#include <string>


int main1()
{
	std::string str =
		"HAZSF, az. - \"dasd\" aff/";
	std::vector < std::string > vec;
	int curr = 0;


	for (auto i = 0; i <= str.length(); ++i)
	{
		if (curr >= vec.size())
			vec.push_back("");
		if (('A' <= str[i] && str[i] <= 'Z') || ('a' <= str[i] && str[i] <= 'z'))
		{
			vec[curr] += str[i];
		}
		else if (str[i] != ' ')
		{
			if (vec[curr]!= "")
				curr++;
			vec.push_back(str.substr(i, 1));
			curr++;
		}
	}
	for (auto i = 0; i <= vec.size()-1; ++i)
	{
		std::cout << vec[i] <<std::endl;
	}

	return 0;
}