#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	char c;

	cout << "Enter the string : " << endl;
	getline(cin, str);

	cout << "Enter the character : " << endl; cin >> c;

	int startIndex = -1;
	int endIndex = -1;

	const char *pfirst;
	pfirst = strchr(str.c_str(), 'o');
	startIndex = pfirst - str.c_str();

	const char *plast;
	plast = strrchr(str.c_str(), 'o');
	endIndex = plast - str.c_str();

	if (startIndex == -1)
	{
		cout << "The character is not found in the string." << endl;
	}
	else
	{
		cout << "First occurrence : " << startIndex + 1 << endl;
		cout << "Last occurrence : " << endIndex + 1 << endl;
	}

	return 0;
}