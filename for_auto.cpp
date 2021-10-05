#include <iostream>
#include <vector>

int main()
{
	std::vector<int> a, b;
	std::vector<int> v{ 1, 2, 3, 4, 5 };

	// C++03
	for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
		a.push_back(*it);

	// C++11
	for (auto it = v.begin(); it != v.end(); ++it)
        b.push_back(*it);

	for (int item : a)
		std::cout << item << " ";  // read only access

	std::cout << std::endl;

	for (auto &item; : b) {
		item *= 10;
		std::cout << item << " ";  // read only access
	}
}

