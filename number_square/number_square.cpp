#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

int main() {

	using std::string;
	using std::vector;

	string input{ "numsquare.txt" };
	std::ifstream inputstream(input);

	char inputchar;

	vector <char> data;
	while (inputstream.get(inputchar))
	{
		if ((inputchar != ',') && (inputchar != '\n'))
		{
			data.push_back(inputchar);
		}
	}
	
	for (auto i : data)
	{
		//std::cout << i;
	}

	std::sort(data.begin(), data.end());

	int count{};
	std::ofstream output;
	output.open("numsquare_out.txt");
	for (auto i : data)
	{
		++count;
		output << i;
		output << ",";

		if (count % 3 == 0) {
			output << "\n";
		}
	}

	output.close();

	string promt;
	std::cin >> promt;
	return 0;


}

