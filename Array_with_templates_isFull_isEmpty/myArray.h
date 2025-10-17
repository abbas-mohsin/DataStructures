#include "Array.h"

template <class T>
class myArray :public Array<T>
{
public:
	myArray(int);
	void addValue(T);
	T removeValue();
	void display();
	bool isFull();
	bool isEmpty();
};

template<class T>
bool myArray<T>::isEmpty()
{
	return Array<T>::currentSize == 0 ;
}

template<class T>
bool myArray<T>::isFull()
{
	return Array<T>::maxSize == Array<T>::currentSize;
}

template<class T>
void myArray<T>::display()
{
	cout << "Maximum Size = " << Array<T>::maxSize << endl;
	cout << "Current Size = " << Array<T>::currentSize << endl;

	for (int i =0; i<Array<T>::currentSize; i++)
		cout << i << ". " << Array<T>::arr[i] << endl;
}


template <class T>
T myArray<T>::removeValue()
{
	if (isEmpty())
	{
		cout << "Array is Empty; returning NULL" << endl;
		return NULL;
	}	

	else
	{
		Array<T>::currentSize--;
		return Array<T>::arr[Array<T>::currentSize];
	}
	
}

template <class T>
void myArray<T>::addValue(T value)
{
	if (isFull())
		cout << "Array is Full" << endl;	

	else
	{
		Array<T>::arr[Array<T>::currentSize] = value;
		Array<T>::currentSize++;
	}
	
}

template <class T>
myArray<T>::myArray(int size):Array<T>(size)
{

}