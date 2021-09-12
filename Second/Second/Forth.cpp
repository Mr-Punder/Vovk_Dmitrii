#include <iostream>
#include <vector>


int main()
{
	std::string str1 = "asadABCsad";
	std::string str2 = "adABCad75";
	std::string ans = "";
	std::vector <std::vector <int>> vec(str1.length()+1, std::vector <int> (str2.length()+1,0));
	

	for (int x = 1; x <= str1.length(); x++)
	{
		for (int y = 1; y <= str2.length(); y++)
		{
			if (str1[x - 1] == str2[y - 1])
				vec[x][y] = vec[x - 1][y - 1] + 1;
			else
				vec[x][y] = std::max(vec[x][y - 1], vec[x - 1][y]);

		}
	}
	

	int x = str1.length(), y = str2.length();
	while (x > 0 && y > 0)
	{
		if (str1[x - 1] == str2[y - 1])
		{
			ans += str1[x - 1];
			x--; y--;
		}
		else if (vec[x - 1][y] > vec[x][y] - 1)
			x--;
		else
			y--;
	}
	std::reverse(ans.begin(), ans.end());
	std::cout << ans;
}