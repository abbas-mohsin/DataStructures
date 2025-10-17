#include <iostream>
using namespace std;

class Array
{
protected:
	T* arr;
	int maxSize;
	int currentSize;

public:
	Array(int);
	virtual void addValue(int) = 0;
	virtual int removeValue() = 0;
};

Array::Array(int s)
{
	maxSize = s;
	currentSize = 0;
	arr = new int[s];
}