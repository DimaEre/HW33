#include <vector>
#include <iostream>
using namespace std;
int main()
{
	srand(time(0));
	vector <int> ������1;
	int size = 0, x = 0;
	cout << "Enter a size:	";
	try
	{
		cin >> size;
		if (size <= 0)
		{
			throw"Error";
		}
	}
	catch (...)
	{
		cout << "Something went wrong...";
		return 1;
	}
	for (size_t i = 0; i < size; i++)
	{
		x = rand() % 2;
		������1.push_back(x);
	}
	for (size_t i = 0; i < size; i++)
	{
		cout << ������1[i] << "\t";

	}
	for (size_t i = 0; i < size; i++)
	{
		if (������1[i] == 1)
		{
			cout << "\n\nNumber 1 is in position " << i;
			return 0;
		}
	}
}