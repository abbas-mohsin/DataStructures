#include "myQueue.h"

int main()
{
	myQueue<int> obj(5);
	obj.enqueue(15);
	obj.enqueue(0);
	obj.enqueue(-3);
	obj.enqueue(99);
	obj.enqueue(24);

	cout << "Dequeued Value: " << obj.dequeue() << endl;

	obj.enqueue(387);
	
	cout << "Dequeued Value: " << obj.dequeue() << endl;

	cout << endl << endl;

	cout << "Integer values displayed: " << endl;
	obj.display();

	cout << endl << endl;

	return 0;
}