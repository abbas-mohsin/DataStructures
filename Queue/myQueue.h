#include "Queue.h"

template <class T>
class myQueue :public Queue<T>
{
public:
	myQueue(int);
	void enqueue(T);
	T dequeue();
	//T top();
	void display();
	bool isFull();
	bool isEmpty();
};

/*
template <class T>
T myQueue<T>::top()
{
	if (isEmpty())
	{
		cout << "Queue is Empty; returning NULL" << endl;
		return NULL;
	}

	else
	{
		return Queue<T>::arr[Queue<T>::currentSize-1];
	}

}
*/

template<class T>
bool myQueue<T>::isEmpty()
{
	return Queue<T>::currentSize == 0 ;
}

template<class T>
bool myQueue<T>::isFull()
{
	return Queue<T>::maxSize == Queue<T>::currentSize;
}

template<class T>
void myQueue<T>::display()
{
	cout << "Maximum Size = " << Queue<T>::maxSize << endl;
	cout << "Current Size = " << Queue<T>::currentSize << endl;

	for (int i =0; i<Queue<T>::currentSize; i++)
		cout << i << ". " << Queue<T>::arr[i] << endl;
}


template <class T>
T myQueue<T>::dequeue()	//O(N)
{
	if (isEmpty())
	{
		cout << "Queue is Empty; returning NULL" << endl;
		return NULL;
	}	

	else
	{
		int returningValue = this->arr[0];     //		int returningValue = Queue<T>::arr[0];

		Queue<T>::currentSize--;

		for (int i=0; i<Queue<T>::currentSize; i++)
			Queue<T>::arr[i] = Queue<T>::arr[i+1];

		return returningValue;
	}
	
}

template <class T>
void myQueue<T>::enqueue(T value)
{
	if (isFull())
		cout << "Queue is Full" << endl;	

	else
	{
		Queue<T>::arr[Queue<T>::currentSize] = value;
		Queue<T>::currentSize++;
	}
	
}

template <class T>
myQueue<T>::myQueue(int size):Queue<T>(size)
{

}