#include <vector>
#include <iostream>
using namespace std;
int main()
{
	srand(time(0));
	vector <int> вектор1;
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
		вектор1.push_back(x);
	}
	for (size_t i = 0; i < size; i++)
	{
		cout << вектор1[i] << "\t";

	}
	for (size_t i = 0; i < size; i++)
	{
		if (вектор1[i] == 1)
		{
			cout << "\n\nNumber 1 is in position " << i;
			return 0;
		}
	}
}