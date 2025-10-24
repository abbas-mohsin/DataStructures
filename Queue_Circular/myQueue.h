#include "Queue.h"

template <class T>
class myQueue :public Queue<T>
{
	int front; //this variable is for removals (dequeue)
	int rear;  //this variable is for additions (enqueue)
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
	cout << "Front = " << front << endl;
	cout << "Rear = " << rear << endl;

	for (int i =front; i<rear; i++)
		cout << i% Queue<T>::maxSize << ". " << Queue<T>::arr[i%Queue<T>::maxSize] << endl;
}


template <class T>
T myQueue<T>::dequeue()	//O(1)
{
	if (isEmpty())
	{
		cout << "Queue is Empty; returning NULL" << endl;
		return NULL;
	}	

	else
	{
		int returningValue = Queue<T>::arr[front%Queue<T>::maxSize];
		front++;
		Queue<T>::currentSize--;
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
		Queue<T>::arr[rear % Queue<T>::maxSize] = value;
		Queue<T>::currentSize++;
		rear++;
	}
	
}

template <class T>
myQueue<T>::myQueue(int size):Queue<T>(size)
{
	front = 0;
	rear = 0;
}