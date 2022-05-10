#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	const int ARR_SIZE = 3;

	Rectangle* rectPtrs[ARR_SIZE];

	rectPtrs[0] = new Rectangle(36, 89);
	rectPtrs[1] = new Rectangle(23, 45);
	rectPtrs[2] = new Rectangle(2, 12);

	for (int i = 0; i < ARR_SIZE; i++)
	{
		cout << rectPtrs[i]->perimeter() << endl;
		cout << rectPtrs[i]->area() << endl;
		cout << endl;
	}

	// now, delete
	for (int i = 0; i < ARR_SIZE; i++)
	{
		delete rectPtrs[i];
		rectPtrs[i] = nullptr;
	}
	return 0;
}