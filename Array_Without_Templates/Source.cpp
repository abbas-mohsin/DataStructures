#include "myArray.h"

int main()
{
	myArray obj(5);

	obj.addValue(15);
	obj.addValue(0);
	obj.addValue(-3);

	cout << "Removed Value: " << obj.removeValue() << endl;
	cout << "Removed Value: " << obj.removeValue() << endl;
	cout << "Removed Value: " << obj.removeValue() << endl;

	return 0;
}