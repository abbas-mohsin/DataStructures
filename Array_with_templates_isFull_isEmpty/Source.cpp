#include "myArray.h"

int main()
{
	myArray<int> obj(4);
	obj.addValue(15);
	obj.addValue(0);
	obj.addValue(-3);
	obj.addValue(99);
	obj.addValue(24);

	cout << "Integer values displayed: " << endl;
	obj.display();

	myArray<char> a(100);
	//a.addValue('A');
	cout << endl << "Character values displayed: " << endl;
	cout << a.removeValue() << endl;

	a.display();

	return 0;
}