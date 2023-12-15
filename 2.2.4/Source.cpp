#include <iostream>
using namespace std;

bool accept()
{
	cout << "Do you want to proceed (y or n) \n";

	char answer;
	cin >> answer;
	if (answer == 'y') return true;

	return false;
}

bool accept2()
{
	cout << "Do you want to proceed (y or n) \n";

	char answer;
	cin >> answer;
	switch (answer)
	{
	case 'y':
		return true;
	case 'n':
		return false;
	default:
		cout << "I'll take it false";
		return false;
		break;
	}
}

bool accept3()
{
	int tries = 1;
	while (tries < 4)
	{
		cout << "Do you want to proceed (y or n) \n";
		char answer;
		cin >> answer;
		switch (answer)
		{
		case 'y':
			return true;
		case 'n':
			return false;
		default:
			cout << "sorry i didn't understand \n";
			++tries;
		}
	}
	cout << "I'll take it false";
	return false;
	
}

int main()
{
	cout << "accept function (if selection)\n";
	bool answer1 = accept();
	if (answer1)
	{
		cout << "accepted\n";
	}
	cout << "accept2 function (switch selection)\n";
	bool answer2 = accept2();
	if (answer2)
	{
		cout << "accepted\n";
	}

	cout << "accept3 function (while loop)\n";
	bool answer3 = accept3();
	if (answer3)
	{
		cout << "accepted\n";
	}
}