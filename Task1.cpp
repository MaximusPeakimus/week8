#include <iostream>	//for cin >> and cout <<
#include <cmath>	//for math routine
using namespace std;

int binary(0);
int denary(0);
bool valid = true;
int main() 		//main algorithm
{
	void getValidBinary();
	void convertBinaryToDenary();
	getValidBinary();
	convertBinaryToDenary();
	cout << "\nThe binary " << binary << " is "
		<< denary << " in base 10";
	cout << "\n\n";
	system("pause");	//to hold the output screen
	return(0);
}
void getValidBinary()
{
	void isValidBinary();

	cout << "\nEnter a binary number: ";
	cin >> binary;
	isValidBinary();
	while (!valid)
	{
		cout << "\nEnter a binary number: ";
		cin >> binary;
		isValidBinary();
	}
}
void isValidBinary()
{
	valid = true;
	int number = binary;
	if (number < 0)
	{
		valid = false;
		cout << "\n ERROR: binary number must be positive";
	}
	else
	{
		while (number > 0)
		{
			int unit = number % 10;
			if ((unit != 0) && (unit != 1))
			{
				valid = false;
				cout << "\n ERROR: invalid binary digit" << unit;
			}
			number /= 10;
		}
	}
}
void convertBinaryToDenary()
{
	int number = binary;
	int unit;
	int power = 1;

	while (number > 0)
	{
		unit = number % 10;
		denary = denary + (unit * power);
		power = power * 2;
		number /= 10;
	}
}
