#include <iostream>	//for cin >> and cout <<
using namespace std;
const int minSize(4);	//boundaries values for shape size
const int maxSize(20);
int size;			//size of shape
char symbol, answer;		//symbol used to draw the shape
bool drawAnother(true);
int main()		//produceBordersOfNStarSquare
{
	do{
	void getValidSize(); 	//prototype
	void getValidSymbol();
	void drawALine();
	//read in valid size and symbol to draw shape
	getValidSize();
	getValidSymbol();
	//draw size lines of symbols on screen
	for (int noLine(0); noLine < size; noLine++)
	{
		drawALine();
	}
	cout << "\n\n";
	cout << "Would you like to draw another? y/Y";
	cin >> answer;
	if ((answer != 'y') && (answer != 'Y'))
	{
		drawAnother = false;
	}
	} while (drawAnother == true);
	system("pause");	//to hold the output screen
	return(0);
}

void getValidSize() {
	cout << "\nEnter the size of the square: ";
	cin >> size;
	while ((size < minSize) || (size > maxSize))
	{
		cout << "\nERROR: Invalid size. Try again:";
		cin >> size;
	}
}
void getValidSymbol() {
	cout << "\nEnter the symbol to be used ('*', '&' or'$'): ";
	cin >> symbol;
	while ((symbol != '*') && (symbol != '&') && (symbol != '$'))
	{
		cout << "\nERROR: Invalid symbol. Try again:";
		cin >> symbol;
	}
}
void drawALine() {
	//draw size symbols on screen
	for (int noSymbol(0); noSymbol < size; noSymbol++)
	{
		cout << symbol;
	}
	cout << "\n";	//go to next line
}
