#include "Array.h"

class myArray :public Array
{
public:
	myArray(int);
	void addValue(int);
	int removeValue();
};

int myArray::removeValue()
{
	currentSize--;
	return arr[currentSize];
}

void myArray::addValue(int value)
{
	arr[currentSize] = value;
	currentSize++;
}

myArray::myArray(int size):Array(size)
{

}