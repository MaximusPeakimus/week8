#include <iostream>	//for cout <<, cin >> and tolower
#include <cassert>	//for assert
using namespace std;
int  dividend, divisor, quotient, rem;	
int main() 	// driver program to test divideTwoIntegers function
{
	void divideTwoIntegers();	//function prototype
	void getValidExpression();
	char answer('y');	//holds user answer to continue or not
	//input dividend and divisor 
	//and do division while the answer is 'Y' (or 'y')
	while (tolower(answer) == 'y')
	{
		//input the expression (in format x / y)
		
		getValidExpression();

		//do the division
		divideTwoIntegers();
		//display product
		cout << "\nThe quotient is: " << quotient;
		cout << "\nThe remainder is: " << rem;
		//ask if user want another try...
		cout << "\n\nContinue (y/n)? ";
		cin >> answer;
	}
	system("pause");	//to hold the output screen
	return (0);
}

void divideTwoIntegers()
{
	quotient = 0;
	while (dividend > divisor)
	{
		dividend -= divisor;
		quotient++;
		rem = dividend;
	}
}

void getValidExpression()
{
	dividend = -1;
	divisor = -1;
	while ((dividend < 0) && (divisor <= n
		n
		
		n
		
		
		
		
		0))
	{ 
	char op;
	cout << "\nEnter the division required (format x / y): ";
	cin >> dividend >> op >> divisor;
	}
}